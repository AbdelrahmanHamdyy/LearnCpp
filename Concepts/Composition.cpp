#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
class birthday {
	int day, month, year;
public:
	birthday(int d, int m, int y) :day(d),month(m),year(y) {}
	void print() {
		cout << day << "/" << month << "/" << year << endl;
	}
};
class people {
	string name;
	birthday date;
public:
	people(string n, birthday bday) :name(n), date(bday) {}
	void print_info() {
		cout << "Name:" << name << endl;
		cout << "Birthday:";
		date.print();
	}
};
int main() {
	birthday day(16, 1, 2002);
	people p("Abdelrahman", day);
	p.print_info();
}