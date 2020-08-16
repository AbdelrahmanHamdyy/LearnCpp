#include <iostream>
#include <string>
using namespace std;
class engineer;
class teacher {
private:
	string name;
	int ID;
	int salary;
	string subject;
public:
	teacher(string n,int s) : name(n),salary(s) {}
	void print() {
		cout << "Name: " << name << endl;
		cout << "Salary: " << salary << endl;
	}
	void bonus() {
		cout << "Salary after bonus = " << salary << endl;
	}
	friend void add_salary(teacher &t, engineer &e);
};

class engineer {
private:
	string name;
	int salary;
	string major;
	int age;
public:
	engineer(string n,int s) : name(n) , salary(s) {}
	friend void add_salary(teacher& t, engineer& e);
	void print() {
		cout << "Name: " << name << endl;
		cout << "Salary: " << salary << endl;
	}
	void bonus() {
		cout << "Salary after bonus = " << salary << endl;
	}
};

void add_salary(teacher& t, engineer& e) {
	t.salary += 1000;
	e.salary += 1000;
}
int main() {
	teacher teach("Ali", 5000);
	engineer eng("Firas", 10000);
	teach.print();
	eng.print();
	add_salary(teach, eng);
	teach.bonus();
	eng.bonus();
}
