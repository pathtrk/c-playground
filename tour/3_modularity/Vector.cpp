module;
// get the interface
#include <stdexcept>
export module Vector;

using namespace std;

export class Vector {
	public:
		Vector(int s);
		double& operator[](int i);
		int size();

	private:
		// elem points to an array of sz doubles
		double* elem;
		int sz;
};

// definition of the constructor
Vector::Vector(int s)
	:elem{new double[s]}, sz{s}
{

}

// definition of subscripting
double& Vector::operator[](int i)
{
	if (i < 0 || size() <= i)
		throw out_of_range{"Out of range error!, Vector::operator[]"};
	return elem[i];
}

// definition of size
int Vector::size()
{
	return sz;
}

export int size(Vector& v) { return v.size(); }

