#include <iostream>

using namespace std;


void print()
{
	int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (auto x: v)
		cout << x << '\n';

	for (auto x: {10, 21, 32, 43, 54, 65})
		cout << x << '\n';
}


void increment()
{
	int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (auto& x : v)
		++x;

	for (auto x: v)
		cout << x << '\n';
}


int count_x(char* p, char x)
{
	if (p == nullptr) return 0;

	int count = 0;
	for (; *p != 0; ++p)
		if (*p == x) ++count;

	return count;
}


int main()
{
	cout << "Testing the print() function...\n";
	print();

	cout << "Testing the increment() function...\n";
	increment();

	cout << "Testing the count_x() function...\n";

	char* np = nullptr;
	char cp[] = {'a', 'p', 'p', 'l', 'e', ' ', 'p', 'i', 'e'};

	cout << count_x(np, 'e') << "\n";
	cout << "occurences of 'e' in 'apple pie' is "<< count_x(cp, 'e') << "\n";
	cout << "occurences of 'p' in 'apple pie' is "<< count_x(cp, 'p') << "\n";
}
