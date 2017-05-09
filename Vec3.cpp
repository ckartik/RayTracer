
#include "Vec3.h"

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

