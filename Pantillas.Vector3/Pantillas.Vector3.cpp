template <typename T>

class Vector3 {
public:
	T x, y, z;
	Vector3(Tx, Ty, Tz) :x(x), y(y), z(z) {}

	Vector3 operator+(const Vector3& other) const {
		return Vector3(x + other.x, y + other.y, z + other.z);
	}

	T Dot(const Vector3& other) const {

		return x * other.x + y * other.y + z * other.z;

	}

	Vector3 Cross(const Vector3& other) const {

		return Vector3(y * other.z - z * other.y, z * other.x - x * other.z, x * other.y - y * other.x);

	}

	T SqrMagnitude() const {
		return x * x + y * y + z * z;
	}

	string Value() const {
		stringstream ds;
		ds << "(" << "," << y << "," << z << ")";
		return ds.str();
	}



};