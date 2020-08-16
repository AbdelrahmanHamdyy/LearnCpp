#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
class employee {
protected:
	string name;
	int age;
	float salary;
	float bonus;
public:
	employee(string n, int a, float s):name(n), age(a), salary(s) {
		bonus = 1000;
	}
	virtual void add_bonus() = 0;
	virtual void print() {
		cout << "Name:" << name << endl;
		cout << "Age:" << age << endl;
		cout << "Salary=$" << salary << endl;
		cout << "Bonus=$" << bonus << endl;
	}
};
class engineer :public employee {
	string major;
public:
	engineer(string n, int a, float s,string m): employee(n,a,s), major(m) {}
	void print() {
		cout << "~~~~~~~~~~ ENGINEER ~~~~~~~~~~" << endl;
		employee::print();
		cout << "Major=" << major << endl;
	}
	void add_bonus() {
		salary += bonus;
		cout << "Total salary=$" << salary << endl;
	}
};
class manager :public employee {
	string position;
public:
	manager(string n, int a, float s, string m): employee(n,a,s), position(m) {}
	void print() {
		cout << "~~~~~~~~~~ Manager ~~~~~~~~~~" << endl;
		employee::print();
		cout << "Position=" << position << endl;
	}
	void add_bonus() {
		salary += bonus;
		cout << "Total salary=$" << salary << endl;
	}
};
int main() {
	employee* e1, * e2;
	e1 = new engineer("Abdelrahman", 19, 10000, "Computer");
	e2 = new manager("Hamdy", 42, 25000, "HR");
	e1->print();
	e1->add_bonus();
	e2->print();
	e2->add_bonus();
}