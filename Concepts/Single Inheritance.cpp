#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
// Operator Overloading
class Distance {
private:
	int feet;
	int inch;
public:
	Distance(int a, int b) :feet(a),inch(b) {}
	Distance() {}
	friend istream& operator >> (istream& input, Distance& d);
	friend ostream& operator << (ostream& output, Distance d);
};
istream& operator >> (istream& input, Distance& d) {
	cout << "F="; input >> d.feet;
	cout << "I="; input >> d.inch;
	return input;
}
ostream& operator << (ostream& output, Distance d) {
	output << "Feet = " << d.feet << endl;
	output << "Inches = " << d.inch << endl;
	return output;
}

class name{
private:
	char n[50];
public:
	name() {
		strcpy_s(n, " ");
	}
	name(char x[]) {
		strcpy_s(n, x);
	}
	name operator + (name x) {
		name temp;
		strcpy_s(temp.n, n);
		strcat_s(temp.n, x.n);
		return temp;
	}
	void print() {
		cout << n << endl;
	}
};

// Single Inheritance
class person {
protected:
	string name;
	int age;
public:
	person() {
		cout << "Base Constructor\n";
	}
	person(string s, int a) :name(s), age(a) {}
	void set_values(string n, int a) {
		name = n;
		age = a;
	}
	void print() {
		cout << "Name:" << name << endl;
		cout << "Age:" << age << endl;
	}
};
class student:public person{
	int grade;
public:
	// Inheritance with constructors
	student(string s, int a, int k) : person(s,a) {
		grade = k;
	}
	void set_level(int g) {
		grade = g;
	}
	void print_level() {
		cout << "Grade:" << grade << endl;
	}
};
// If we want to access the data members of the person class from the student class, we make the members protected and not private.
// Default constructor of the base class is always called when an object of the derived class is intitialised
// When creating an object of the derived class, the constructor of the base class is called and then the derived constructor
// For destructors, it is the opposite.
int main() {
	Distance d;
	cin >> d;
	cout << d;
	char x[50] = "Tekashi";
	char r[50] = " 6ix9ine";
	name n1(x), n2(r),n3;
	n3 = n1 + n2;
	n3.print();
	person p1("Mohamed", 20);
	p1.set_values("Abdelrahman", 18);
	p1.print();
	student s1("Ahmed", 19,11);
	s1.print();
	s1.print_level();
}