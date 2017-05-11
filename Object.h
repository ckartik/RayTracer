#ifndef _OBJECT_H
#define _OBJECT_H

#include "Vec3.h"

class Object {
    Object();
    //TODO: @Kartik Change return type to Color, once color class is implemented #REF1
    virtual Vec3<float> getColor();
    virtual Vec3 getNormalAt(Vec3 intersection_position);
    //TODO: @Kartik Change the pram type to Ray once Ray class implmented #REF2
    virtual float findIntersection(Vec3 ray);i
    virtual ~Object();
}

Object::Object () {}

//TODO: @Kartik #REF1 here too
virtual Vec3<float> Object::getColor(){
    return Vec3 (0,0,0);
}

virtual float Object::findIntersection(Vec3 ray){
    retur 0;
}

virtual Vec3<float> Object::getNormalAt(Vec3 intersection_position){
    return Vec3 (0,0,0);
}

#endif

