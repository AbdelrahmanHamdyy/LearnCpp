#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
class person {
private:
	char name[30];
	int age;
public:
	person(char n[], int a) :age(a){
		strcpy_s(name, n);
	}
	void print() {
		cout << "Name:" << name << endl;
		cout << "Age=" << age << endl;
	}
};
class employee : public person{
	float salary;
public:
	employee(char n[], int a, float s) :person(n,a),salary(s) {}
	void print() {
		person::print();
		cout << "Salary=$" << salary << endl;
	}
};
class prog :public employee{
	string skill;
public:
	prog(char n[],int a,float s,string x) :employee(n,a,s),skill(x) {}
	void print() {
		employee::print();
		cout << "Skill:" << skill << endl;
	}
};
int main() {
	char n[30] = "Abdelrahman";
	prog p(n, 19, 7000, "Web Development");
	p.print();
}