#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;

// Single & Multiple Inheritance
class person {
protected:
	string name;
	int age;
public:
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
class student {
	int grade;
public:
	// Inheritance with constructors
	student(int l) {
		grade = l;
	}
	void set_level(int g) {
		grade = g;
	}
	void print_level() {
		cout << "Grade:" << grade << endl;
	}
};
// If we want to access the data members of the person class from the student class, we make the members protected and not private.
// Note: When the default constructor of a derived class is called, the base default constructor is also executed
class hstudent : public person, public student{
	string research;
public:
	hstudent(string x,int a,int l,string r) :person(x,a),student(l) {
		research = r;
	}
	void print() {
		person::print();
		student::print_level();
		cout << "Research:" << research << endl;
	}
};
int main() {
	hstudent h1("Abdelrahman", 19, 10, "Computer Engineering");
	h1.print();
}