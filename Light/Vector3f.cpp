//
// Created by akemi on 09.12.25.
//

#include "Vector3f.h"
#include <string>
#include <vector>

Vector3f::Vector3f() : x(0), y(0), z(0) {}

Vector3f::Vector3f(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

Vector3f::~Vector3f() {}

std::vector<float> Vector3f::getXYZ() {
    return {x, y, z};
}

float Vector3f::get_x() { return x; }
float Vector3f::get_y() { return y; }
float Vector3f::get_z() { return z; }

void Vector3f::set_x(float val) { x = val; }
void Vector3f::set_y(float val) { y = val; }
void Vector3f::set_z(float val) { z = val; }
void Vector3f::set_xyz(float X, float Y, float Z) { x = X; y = Y; z = Z; }

bool Vector3f::operator==(Vector3f v) {
    return x == v.x && y == v.y && z == v.z;
}

std::string Vector3f::to_string() {
    return "Coords: " + std::to_string(x) + ", "
                     + std::to_string(y) + ", "
                     + std::to_string(z) + "\n";
}

