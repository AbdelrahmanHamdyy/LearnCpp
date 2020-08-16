#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
class person {
protected:
	string name;
	int age;
	int ID;
public:
	person(string n, int a, int i) :name(n),age(a),ID(i) {}
	void print() {
		cout << "Name:" << name << endl;
		cout << "Age:" << age << endl;
		cout << "ID:" << ID << endl;
	}
};
class student : public person {
	int level;
	char grade;
public:
	student(string n,int a,int i,int l,char g) : person(n,a,i),level(l),grade(g) {}
	void print() {
		person::print();
		cout << "Level=" << level << endl;
		cout << "Grade:" << grade << endl;
		cout << "---------------------" << endl;
	}
};
class teacher : public person {
	string subject;
	float salary;
public:
	teacher(string n, int a, int i, string l, float g) : person(n, a, i), subject(l), salary(g) {}
	void print() {
		person::print();
		cout << "Subject:" << subject << endl;
		cout << "Salary=$" << salary << endl;
		cout << "---------------------" << endl;
	}
};
class engineer : public person {
	string major;
	float pay;
public:
	engineer(string n, int a, int i, string l, float g) : person(n, a, i), major(l), pay(g) {}
	void print() {
		person::print();
		cout << "Major:" << major << endl;
		cout << "Wage=$" << pay << endl;
		cout << "---------------------" << endl;
	}
};
int main() {
	student s("Abdelrahman", 19, 365, 12, 'A');
	s.print();
	teacher t("Mohamed", 27, 642, "Physics", 5000);
	t.print();
	engineer e("Hamdy", 42, 054, "Architect", 10000);
	e.print();
}