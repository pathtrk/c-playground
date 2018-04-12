#include <iostream>

using namespace std;


class Vector {
	public:
		Vector(int s) :elem{new double[s]}, sz{s}
		{
			// constructor goes here...
		}

		// element access: subscripting
		double& operator[](int i) {
			return elem[i];
		}

		int size() { return sz; }

	private:
		// pointer to the elements
		double *elem;
		// the number of elements
		int sz;
};


// read s integers form cin and return their sum
// s is assumed to be positive
double read_and_sum(int s)
{
	// make a vector of s elements
	Vector v(s);
	// read into elements
	for (int i = 0; i != v.size(); ++i)
		cin >> v[i];

	// take the sum of the elements
	double sum = 0;
	for (int i = 0; i != v.size(); ++i)
		sum += v[i];

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

