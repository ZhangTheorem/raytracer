#ifndef VECTOR_H
#define VECTOR_H
#endif

#ifdef _WIN32
#include <windows.h>
#else
#include <sys/time.h>
#endif

#include <cmath>
#include <math.h>
#include <stdio.h>

//****************************************************
// Vector
//****************************************************

class Vector {                                        // note: vectors are simply [x,y,z]
  
  public:                                             // so things like points and colors use Vector

    float x, y, z;
    float len();
    Vector normalize();
    void clamp();

    Vector& operator+=(const Vector&);
    Vector& operator-=(const Vector&);
    Vector& operator*=(const float);
    Vector& operator/=(const float);
    
    static void print(Vector v);
    static Vector cross(Vector a, Vector b);
    static float dot(Vector a, Vector b);
    static Vector point_multiply(Vector a, Vector b);
    
    Vector();
    Vector(float, float, float);
    
};

Vector operator+(Vector, const Vector&);
Vector operator-(Vector, const Vector&);
Vector operator*(Vector, const float);
Vector operator*(const float, Vector&);
Vector operator/(Vector, const float);