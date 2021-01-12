// get the interface
#include "vector.h"

// definition of the constructor
Vector::Vector(int s)
	:elem{new double[s]}, sz{s}
{

}

// definition of subscripting
double& Vector::operator[](int i)
{
	return elem[i];
}

// definition of size
int Vector::size()
{
	return sz;
}

