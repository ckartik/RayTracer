#ifndef _VEC3_H_
#define _VEC3_H_

#include <iostream>

template<typename T>
class Vec3
{
    public:
        T x,y,z;
        Vec3();
        Vec3(T xx);
        Vec3(T xx, T yy, T zz);
        Vec3 &normalize();
        Vec3 operator* (const T &f) const;
        Vec3 operator* (const Vec3<T> &v) const;
        Vec3 operator - (const Vec3<T> &v) const;
        Vec3 operator - () const;
        Vec3 &operator += (const Vec3<T> &v);
        Vec3 &operator *= (const Vec3<T> &v);
        T length2() const;
        T length() const;
        T dot(const Vec3<T> &v) const;
        friend std::ostream &operator<< (std::ostream &os,const Vec3<T> &v){
            os << "[ " << v.x << ", " << v.y << ", " << v.z << " ]";
            return os;
        }
};




template<typename T>
Vec3<T>::Vec3(): x(T(0)), y(T(0)), z(T(0)) {}

template<typename T>
Vec3<T>::Vec3(T xx): x(xx), y(xx), z(xx) {}

template<typename T>
Vec3<T>::Vec3(T xx, T yy , T zz): x(xx), y(yy), z(zz) {}

template<typename T>
Vec3<T> Vec3<T>::operator * (const T &f) const { return Vec3<T> (x * f, y * f, z * f); }

template<typename T>
Vec3<T> Vec3<T>::operator * (const Vec3<T> &v) const { return Vec3<T> (x * v.x, y * v.y, z * v.z); }

template<typename T>
Vec3<T> Vec3<T>::operator - (const Vec3<T> &v) const { return Vec3<T> (x - v.x, y - v.y, z - v.z); }

template<typename T>
Vec3<T> Vec3<T>::operator - () const { return Vec3<T> (-x, -y, -z); }

template<typename T>
Vec3<T> &Vec3<T>::operator += (const Vec3<T> &v){ return Vec3<T> (x += v.x, y += v.y, z += v.z);}

template<typename T>
Vec3<T> &Vec3<T>::operator *= (const Vec3<T> &v){ return Vec3<T> (x *= v.x, y *= v.y, z *= v.z);}

template<typename T>
T Vec3<T>::length2() const {
    return x * x + y * y + z * z;
}

template<typename T>
T Vec3<T>::length() const {
    return sqrt(Vec3::length2());
}

template<typename T>
T Vec3<T>::dot(const Vec3<T> &v) const { return x * v.x + y + v.y + z + v.z; }

template<typename T>
Vec3<T> &Vec3<T>::normalize()
{
    T normalSquared = length2();
    if (normalSquared > 0) {
        T inverseNormal = 1 / sqrt(normalSquared);
        x *= inverseNormal;
        y *= inverseNormal;
        z *= inverseNormal;
    }
    return *this;
}
#endif
