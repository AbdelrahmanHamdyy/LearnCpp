#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
struct employee {
	int empno;
	string empname;
	string job;
	double salary;
	double bonus;
	double total_salary;
};
void get_data(employee e[], int size);
void set_bonus(employee& e, float percent);
void print(employee e[], int size);

int main() {
	employee emp[5];
	get_data(emp, 5);
	set_bonus(emp[1], 0.10f);
	print(emp, 5);
}
void get_data(employee e[], int size) {
	cout << "~*~*~*~*~*~*EMPLOYEES*~*~*~*~*~*~" << endl;
	for (int i = 0; i < size; i++) {
		cout << "Employee " << i + 1 << endl;
		cout << "Enter your name, employee number and job please: " << endl;
		cout << endl;
		cout << "Name: "; cin >> e[i].empname;
		cout << "Number: "; cin >> e[i].empno;
		cout << "Job: "; cin >> e[i].job;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;
		if (e[i].job == "Manager")
			e[i].salary = 5000;
		else if (e[i].job == "Engineer")
			e[i].salary = 3000;
		else if (e[i].job == "Clerk")
			e[i].salary = 2000;
		else
			e[i].salary = 1000;
		e[i].total_salary = e[i].salary;
		e[i].bonus = 0;
	}
}

void set_bonus(employee& e, float percent) {
	e.bonus = e.salary * percent;
	e.total_salary = e.salary + e.bonus;
}

void print(employee e[], int size) {
	cout << "Displaying information" << endl;
	for (int i = 0; i < size; i++) {
		cout << "EMPLOYEE " << i + 1 << endl;
		cout << "Name: " << e[i].empname << endl;
		cout << "Employee Number: " << e[i].empno << endl;
		cout << "Job: " << e[i].job << endl;
		cout << "Salary = " << e[i].salary << endl;
		cout << "Bonus = " << e[i].bonus << endl;
		cout << "Total Salary = " << e[i].total_salary << endl;
		cout << "********************************" << endl;
	}
}
