//get the standard-library math function interface
#include <cmath>
#include <iostream>

// get vector's interface
#include "vector.h"

// make std members visible
using namespace std;

double sqrt_sum(Vector& v)
{
	double sum = 0;
	for (int i = 0; i != v.size(); ++i)
		sum += sqrt(v[i]);

	// sum of square roots
	return sum;
}


int main()
{
	Vector v = Vector(3);

	v[0] = 1.0; v[1] = 1.2; v[2] = 1.3;

	cout << sqrt_sum(v) << endl;
}

