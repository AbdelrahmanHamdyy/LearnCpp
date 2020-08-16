#include <iostream>
#include <string>
using namespace std;

int main() {
	int age;
	cout << "Enter your age in days: "; cin >> age;
	int years, months, days;
	years = 0;
	months = 0;
	while (age / 365 >= 1) {
		age = age - 365;
		years++;
	}
	cout << years << " year(s)" << endl;
	while (age / 30 >= 1) {
		age = age - 30;
		months++;
	}
	cout << months << " month(s)" << endl;
	cout << age << " days" << endl;
}
