// Google Code U.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>  
#include <random>
using namespace std;

// Example 1
//
void hello()
{
    for (int i = 0; i < 6; ++i)
    {
		cout.width(17);
		cout << "hello world!" << left << endl;
    }
}


// Example 2

void echo()
{
	int inputVar = 0;

	do {
		cout << "Enter a number (-1 = quit): ";

		if (!(cin >> inputVar))
		{
			cout << "You entered a non-numric..." << endl;
			cin.clear();
			cin.ignore();
		}
		else if (inputVar != -1)
		{
			cout << "You entered " << inputVar << endl;
		}

	} while (inputVar != -1);

	cout << "All done." << endl;
}


// Example 3

 void writeTabs() {
     cout << " 1\t2\t3\t4\t5\t6\t7\t8\t9" << endl << "" << endl;
     for (int c = 1; c < 10; c++) {
         cout << c << "| ";
         for (int i = 1; i < 10; i++) {
             cout << i * c << '\t';
         }
         cout << endl;
     }
 }


// Example 4

 void guessTheNumber() {
 	random_device rd; // obtain a random number from hardware
 	mt19937 gen(rd()); // seed the generator
 	uniform_int_distribution<> distr(0, 100); // define the range
 
 	int secret = distr(gen);
 	int guess;
 
 	do {
 		cout << "Guess a number within the range from 0 to 100: ";
 
 		if (!(cin >> guess)) {
 			cout << "You entered a non-numric..." << endl;
 			cin.clear();
 			cin.ignore();
 		} else {
 			if (guess > secret)
 			{
 				cout << "You entered " << guess << ", but that's too large." << endl;
 			}
 			if (guess < secret)
 			{
 				cout << "You entered " << guess << ", but that's too small." << endl;
 			}
 		}
 	} while (guess != secret);
   
 	cout << "All done, the number was: " << secret << endl;
 }


// Example 5

 void mathPuzzles() {
 	for (int h = 0; h < 100; h++)
 		for (int p = 0; p < 100; p++)
 			for (int r = 0; r < 100; r++)
 				if (h + p + r == 100)
 					if (((double(h) * 10) + (double(p) * 3) + (double(r) * 0.5)) == 100)
 						cout << h << " " << p << " " << r << endl;
 }


// Example 6

void stringFn() {
	string str1 = "To be or not to be, that is the question";
	string str2 = "only ";
	string str3 = str1.substr(6, 12);
	str1.insert(32, str2);
	str1.replace(str1.find("to be", 0), 5, "to jump");
	str1.erase(9, 4);
	cout << str1 << endl;
	for (int i = 0; i < str3.length(); i++)
		cout << str3[i]; cout << endl;
}


// Example 7

#define PricePerUnit 255
#define WeeklyWage 500
#define Salary 7.0
#define HoursPerWeek 40
#define Commission2 0.1
#define Commission3 0.3
#define BonusPerUnit 20


int GetInput() {
    int units;
    cout << "Enter number of units sold per week: ";
	if (!(cin >> units)) {
		cout << "Numbers only" << endl;
		return 0;
    } else {
        return units;
    }
}

void CalcMethod1() {
    cout << "Method1: " << WeeklyWage << endl;
}

void CalcMethod2(int Sales) {
    double Commission, PerHour;
    Commission = double(Sales) * PricePerUnit * Commission2;
    PerHour = HoursPerWeek * Salary;
    cout << "Method2: " << Commission + PerHour << endl;
}

void CalcMethod3(int& Sales) {
    double Commission;
    int Extra;
    Commission = double(Sales) * PricePerUnit * Commission3;
    Extra = BonusPerUnit * Sales;
    cout << "Method3: " << Commission + Extra << endl;
}

int calcSalary() {
    int sales = GetInput();
    if (sales == 0)
        return 0;
	CalcMethod1();
	CalcMethod2(sales);
	CalcMethod3(sales);
 }

// Example 8

int a = 18;
int b = 6;

int function1(int a, int b) {
  return a - b;
}

int function2() {
  int c;
  c = a + b;
  return c;
}

void scope() {
    int b = 12;
    int c = 0;
    a = function1(b, a);
    c = function2();
    cout << "a: " << a << " b: " << b << " c: " << c << endl;
}


int arrangeBooks(int length, int patterns) {
	int newPatterns = (length + 1) * patterns;

	if (length < 6)
		return arrangeBooks(length + 1, newPatterns);
	else
		return patterns;
	auto answer = arrangeBooks(1, 1);
	cout << answer << endl;
}


// Example 9: Processing Files

#include <fstream>
#include <string>

void writePersonFile() {
  char first_name[30], last_name[30]; int age;
  char file_name[20];
  // Collect the data.
  cout << "Enter First Name: "; cin >> first_name;
  cout << "Enter Last Name: "; cin >> last_name;
  cout << "Enter Age: "; cin >> age;
  cout << endl << "Enter the name of the file: "; cin >> file_name;

  // Create an ofstream called People, open the stream for output.
  ofstream People(file_name, ios::out);
  // Write the output to the stream.
  People << first_name << endl << last_name << endl << age << endl;
}

void readPersonFile() {
    char file_name[20];
    cout << "Enter the file name: "; cin >> file_name;

    ifstream People(file_name);
	cout << "Reading from the file" << file_name << endl;

    string line;
    while(getline(People, line)) cout << line << endl;

	People.close();
}


void managePeopleFile() {
	char first_name[30], last_name[30]; int age;
	char task, file_name[20];

	cout << "Will you read from a file or write names to it? ['w' or 'r']: "; cin >> task;
	cout << "Input the file name: "; cin >> file_name;

	if (task == 'r')
	{
		ifstream People(file_name);
		string line;

		while (task != 'q' && getline(People, line))
		{
			cout << line << endl;
			getline(People, line); cout << line << endl;
			getline(People, line); cout << line << endl;

			cout << endl << "Type 'q' to quit, or any other to read more: "; cin >> task;
		}
		People.close();
	}

	if (task == 'w')
	{
		ofstream People(file_name, ios::out);

		while (task != 'q') {
			cout << "Enter First Name: "; cin >> first_name;
			cout << "Enter Last Name: ";  cin >> last_name;
			cout << "Enter Age: ";        cin >> age;

			People << first_name << endl << last_name << endl << age << endl;
			cout << endl << "Type 'q' to quit, or any other to write more: "; cin >> task;
		}
		People.close();
	}
}

int main() {
	managePeopleFile();
}
