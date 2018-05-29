// Defines Vector class
// This class is taken from the sample of
// "The c++ programming language"
// by Bjarne Stroustrup

class Vector {
	public:
		Vector(int s);
		double& operator[](int i);
		int size();

	private:
		// elem points to an array of sz doubles
		double* elem;
		int sz;
};


