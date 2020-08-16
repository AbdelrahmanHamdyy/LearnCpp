#include <iostream>
#include <string>
using namespace std;
class student;
class department {
private:
	string name;
	string address;
public:
	friend void show(student s, department d);
	void read_info() {
		cout << "Name: "; cin >> name;
		cout << "Address: "; cin >> address;
	}
};

class student {
private:
	string std_name;
	int degree[7];
public:
	friend void show(student s, department d);
	student() {
		cout << "Name: "; cin >> std_name;
		for (int i = 0; i < 7; i++) {
			cout << "Degree " << i + 1 << ": "; cin >> degree[i];
		}
	}
};

void show(student s, department d) {
	int sum = 0;
	cout << "---- DEPARTMENT ----" << endl;
	cout << "Department: " << d.name << endl;
	cout << "Address: " << d.address << endl;
	cout << "---- STUDENT INFO ----" << endl;
	cout << "Student Name: " << s.std_name << endl;
	for (int i = 0; i < 7; i++) {
		sum += s.degree[i];
	}
	cout << "Average of the 7 degrees = " << float(sum / 7) << endl;
}
int main() {
	department dep;
	dep.read_info();
	student s1;
	show(s1, dep);
}
