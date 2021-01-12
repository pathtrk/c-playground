// get vector's interface
// then, get the standard-library math function interface

#include <cmath>
#include <iostream>
#include <stdexcept>

import Vector;

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
	cout << "The sum of each square root of 1.0, 1.2, 1.3 is: " << sqrt_sum(v) << endl;

	try {
		v[0] = 1.0; v[1] = 1.2; v[2] = 1.3; v[3] = 0;
	}
	catch (out_of_range& err) {
		cerr << err.what() << endl;
	}
}

