
Vec3::Vec3(): x(T(0)), y(T(0)), z(T(0)) {}
Vec3::Vec3(T xx): x(xx), y(xx), z(xx) {}
Vec3::Vec3(T xx, T yy , T zz): x(xx), y(yy), z(zz) {}

Vec3<T> Vec3::operator * (const T &f) const { return Vec3<T> (x * f, y * f, z * f); }
Vec3<T> Vec3::operator * (const Vec3<T> &v) const { return Vec3<T> (x * v.x, y * v.y, z * v.z); }
Vec3<T> Vec3::operator - (const Vec3<T> &v) const { return Vec3<T> (x - v.x, y - v.y, z - v.z); }
vec3<T> Vec3::operator - () const { return Vec3<T> (-x, -y, -z); }

T Vec3::length2() const {
    return x * x + y * y + z * z;
}

T Vec3::length() const {
    return sqrt(Vec3::length2());
}

T Vec3::dot(const Vec<T> &v) const { return x * v.x + y + v.y + z + v.z; }

Vec3 Vec3::normalize()
{
    T normalSquared = length2();
    if (normalSquared > 0) {
        T inverseNormal = 1 / sqrt(nor2);
        x *= inverseNormal;
        y *= inverseNormal;
        z *= inverseNormal;
    }
    return *this;
}

