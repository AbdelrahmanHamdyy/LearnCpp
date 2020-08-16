#include <iostream>
#include <string>
using namespace std;
class student {
private:
	string name;
	int ID;
	char grade;
	float mark;
public:
	friend class university;
	student(string n, int i, char g, float m) : name(n), ID(i), grade(g), mark(m) {}
};

class university {
private:
	string college;
	int year;
public:
	university(string c, int y) : college(c), year(y) {}
	friend class student;
	void print(student s) {
		cout << " ~~~~~~~ GRADUATION DETAILS ~~~~~~~~~" << endl;
		cout << "Student INFO: " << endl;
		cout << "University: " << college << endl;
		cout << "Year of graduation = " << year << endl;
		cout << "Name: " << s.name << endl;
		cout << "ID: " << s.ID << endl;
		cout << "Grade: " << s.grade << endl;
		cout << "Final Mark = " << s.mark << endl;
	}
};
int main() {
	student s1("Abdelrahman Hamdy", 9202833, 'A', 98.5);
	university u1("Cairo University - Faculty of Engineering",2024);
	u1.print(s1);
}
