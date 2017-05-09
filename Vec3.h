#ifndef _VEC3_H_
#define _VEC3_H_
template<typename T>
class Vec3
{
    public:
        T x,y,z;
        Vec3();
        Vec3(T xx);
        Vec3(T xx, T yy, T zz);
        Vec3 &normalize();
        T length2();
        T legnth();
        T dot();
        friend std::ostream & operator << (std::ostream &os, const Vec3<T> &v) { 
            os << "[" << v.x << " " << v.y << " " << v.z << "]"; 
                return os;
        } 
};
#endif
