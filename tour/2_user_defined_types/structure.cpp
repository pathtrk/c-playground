#include <iostream>

using namespace std;

struct Vector {
	int sz;  // number of elements
	double* elem;
};


// allocate an array of s doubles
void vector_init(Vector& v, int s)
{
	v.elem = new double[s];
	v.sz = s;
}


// read s integers form cin and return their sum
// s is assumed to be positive
double read_and_sum(int s)
{
	Vector v;
	// alocation s elements for v
	vector_init(v, s);
	// read into elements
	for (int i = 0; i != s; ++i)
		cin >> v.elem[i];

	// take the sum of the elements
	double sum = 0;
	for (int i = 0; i!= s; ++i)
		sum += v.elem[i];

	return sum;
}


int main()
{
	int size;
	cout << "How large vector do you want to create? : ";
	cin >> size;

	cout << "reading the content of the vector its length of " << size << endl;

	double sum =  read_and_sum(size);
	cout.precision(5);
	cout << "The sum of the elements is " << fixed << sum << endl;
}

