cmake_minimum_required(VERSION 3.10)

project(KGG_CPP_Project_Repo VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Включаем подпапки с заголовочными файлами
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Light
        ${CMAKE_CURRENT_SOURCE_DIR}/Math
        ${CMAKE_CURRENT_SOURCE_DIR}/ReadWrite)

# Собираем все cpp-файлы из подпапок
file(GLOB LIGHT_SOURCES "Light/*.cpp")
file(GLOB MATH_SOURCES "Math/*.cpp")
file(GLOB RW_SOURCES "ReadWrite/*.cpp")


# Основной список исходников
set(SOURCES main.cpp ${LIGHT_SOURCES} ${MATH_SOURCES} ${RW_SOURCES})

# Создаем исполняемый файл
add_executable(${PROJECT_NAME} ${SOURCES})

find_package(PkgConfig REQUIRED)

pkg_check_modules(SFML REQUIRED sfml-all)

include_directories(${SFML_INCLUDE_DIRS})
link_directories(${SFML_LIBRARY_DIRS})
target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES})