#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
// Public, private and protected inheritance
class person {
private:
	char name[30];
	int age;
public:
	person () {}
	person(char n[], int a) :age(a) {
		strcpy_s(name, n);
	}
	void print() {
		cout << "Name:" << name << endl;
		cout << "Age=" << age << endl;
	}
	void test() {
		cout << "\nMethod from base class\n";
	}
};
class employee : private person {
	float salary;
public:
	// if we want to make a data member in the base class public to be called by main, we simply do this person::name (for example);
	employee(char n[], int a, float s) :person(n, a), salary(s) {}
	void print() {
		person::print();
		cout << "Salary=$" << salary << endl;
	}
};
// For public inheritance, we can call the base class's functions in main from the derived class unlike private and protected where we
// cant reach them from the derived class
int main() {
	char n[30] = "Abdelrahman";
	employee e(n, 19, 25000);
	e.print();
	e.person::test();
}