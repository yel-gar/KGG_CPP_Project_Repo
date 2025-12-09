//
// Created by akemi on 09.12.25.
//

#ifndef VECTOR3F_H
#define VECTOR3F_H
#include <vector>
#include <string>

class Vector3f {
private:
    float x, y, z;
public:
    Vector3f(); // Constructor
    Vector3f(float x, float y, float z);
    ~Vector3f();
    std::vector<float> getXYZ();
    float get_x();
    float get_y();
    float get_z();
    void set_x(float x);
    void set_y(float y);
    void set_z(float z);
    void set_xyz(float x, float y, float z);
    bool operator==(Vector3f v);
    std::string to_string();
};



#endif //VECTOR3F_H
