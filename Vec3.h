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
        Vec3 operator* (const T &f) const;
        Vec3 operator* (const Vec3<T> &v) const;
        Vec3 operator - (const Vec3<T> &v) const;
        Vec3 operator - () const;
        Vec3 &operator += (const Vec3<T> &v);
        Vec3 &operator *= (const Vec3<T> &v);
        T length2() const;
        T length() const;
        T dot(const Vec3<T> &v) const;
};
#endif
