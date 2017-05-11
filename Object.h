#ifndef _OBJECT_H
#define _OBJECT_H

#include "Vec3.h"

class Object {
    Object();
    //TODO: @Kartik Change return type to Color, once color class is implemented #REF1
    virtual Vec3<float> getColor();
    virtual Vec3 getNormalAt(Vec3 intersection_position);
    //TODO: @Kartik Change the pram type to Ray once Ray class implmented #REF2
    virtual float findIntersection(Vec3 ray);
    virtual ~Object();
}

#endif

