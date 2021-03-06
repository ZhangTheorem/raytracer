#ifndef RAY_H
#define RAY_H
#endif

#ifndef VECTOR_H
#include "vector.h"
#endif

//*****************************************************************************
// Ray
//*****************************************************************************

class Ray {
  
  public:
    
    Vector position;
    Vector direction;
    bool into;
    float t_min;
    float t_max;
    
    Ray();
    Ray(Vector pos, Vector dir, float min, float max);
    
    static void print(Ray input);
  
};