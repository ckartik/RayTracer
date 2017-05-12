#include "Object.h"

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

virtual Object::~Object() {}