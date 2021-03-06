#ifndef RAYTRACER_H
#define RAYTRACER_H
#endif

#ifndef VECTOR_H
#include "vector.h"
#endif

#ifndef RAY_H
#include "ray.h"
#endif

#ifndef LIGHT_H
#include "light.h"
#endif

#ifndef DIRLIGHT_H
#include "dirlight.h"
#endif

#ifndef POINTLIGHT_H
#include "pointlight.h"
#endif

#ifndef SPHERE_H
#include "sphere.h"
#endif

#ifndef TRIANGLE_H
#include "triangle.h"
#endif

#ifndef SCENE_H
#include "scene.h"
#endif

using namespace std;

//*****************************************************************************
// Raytracer
//*****************************************************************************

class Raytracer {

  public:
    // Declarations
    static int max_depth; 

    // Methods
    static Vector reflection_v(Vector direction, Vector normal);
    static bool shadow_ray(Scene* scene, Ray ray, Shape* shape);
    static void shine_dir_lights(Shape* shape, Vector *color, Scene *scene, 
        Material material, Vector surface, Vector viewer, Vector normal);
    static void shine_point_lights(Shape* shape, Vector *color, Scene* scene, 
        Material material, Vector surface, Vector viewer, Vector normal);
    static void shine_ambient_lights(Vector *color, Scene* scene, 
      Material material);

    static void trace(Scene* scene, Ray ray, int depth, Vector* color,
        Shape* last_shape);

    static bool canRefract(Vector direction, Vector normal, float index, Material material);
    static Ray refract(Vector direction, Vector normal, float index, Material material, Vector intersect);

};