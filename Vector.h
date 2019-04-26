#pragma once
class Vector
{
private:
	int x;
	int y;

public:
	double modul = -1;

	Vector vector_input()
	{
		cout << "Enter vector coords (with ' '): ";
		cin >> x >> y;

		return Vector(x, y);
	}

	double vector_modul()
	{
		modul = sqrt(pow(x, 2) + pow(y, 2));

		return modul;
	}

	Vector operator+=(Vector &vector)
	{
		x += vector.x;
		y += vector.y;

		return Vector(x, y);
	}

	Vector operator-=(Vector &vector)
	{
		x -= vector.x;
		y -= vector.y;

		return Vector(x, y);
	}

	Vector operator=(Vector &vector)
	{
		return (Vector(x = vector.x, y = vector.y));
	}

	bool operator==(Vector &vector)
	{
		return ((x == vector.x) || (y == vector.y));
	}

	friend istream &operator>>(istream &in, Vector &vector)
	{
		in >> vector.x;
		in >> vector.y;

		return in;
	}

	friend ostream &operator<<(istream &out, Vector &vector)
	{
		out << vector.x;
		out << vector.y;

		return out;
	}

	void vector_output()
	{
		cout << "Result of action with vectors: " << x << "," << y << endl;
	}

	Vector(){}
	Vector(int x, int y) : x(x), y(y){}
	Vector(const Vector &vector) : x(vector.x), y(vector.y){}
	~Vector()
	{
		cout << "Class destructed/n";
	}
};