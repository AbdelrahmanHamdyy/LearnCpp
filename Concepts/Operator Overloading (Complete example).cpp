#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
const int siz = 5;
// unary & binary
class engineer {
private:
	string name;
	int age;
	string major;
	float salary;
public:
	friend int main();
	engineer() {
		name = " ";
		age = 0;
		major = " ";
		salary = 0;
	}
	engineer(string n, int a, string m) {
		name = n;
		age = a;
		major = m;
		if (major == "Computer")
			salary = 10000;
		else if (major == "Electrical")
			salary = 8000;
		else if (major == "Mechanical")
			salary = 5000;
		else if (major == "Civil")
			salary = 4000;
		else
			salary = 2000;
	}
	void print() {
		cout << "Faculty of Engineering" << endl;
		cout << "----------------------" << endl;
		cout << "Name:" << name << endl;
		cout << "Age:" << age << endl;
		cout << "Major:" << major << endl;
		cout << "Salary=$" << salary << endl;
		cout << "----------------------" << endl;
	}
	void operator ++ (int) {
		++age;
	}
	engineer operator ++ () {
		engineer temp;
		temp.age = ++age;
		return temp;
	}
	engineer operator - (engineer e) {
		engineer temp;
		temp.salary = salary - e.salary;
		return temp;
	}
};
// binary (string)
class overload {
private:
	char str[100];
public:
	overload() {
		strcpy_s(str, " ");
	}
	void set(char s[]) {
		strcpy_s(str,s);
	}
	overload operator + (overload str1) {
		overload temp;
		strcpy_s(temp.str, str);
		strcat_s(temp.str, str1.str);
		return temp;
	}
	void print() {
		cout << str << endl;
	}
};
// Overloading the [] subscript
class subscript {
private:
	int a[siz];
public:
	int& operator [] (int index) {
		if (index < 0 || index >= siz)
			cout << "Out of bounds\n";
		else 
			return a[index];
	}
};
// binary (example)
class circle {
private:
	int radius;
	float area;
public:
	circle() {
		radius = 0;
		area = 0;
	}
	circle(int r) {
		radius = r;
		area = 3.14 * radius * radius;
	}
	void print_area() {
		cout << "Area=" << area << endl;
	}
	circle operator * (circle c) {
		circle temp;
		temp.area = area * c.area;
		return temp;
	}
};
int main() {
	// unary
	engineer e1("Abdelrahman", 19, "Computer");
	engineer e2("Mohamed", 20, "Mechanical");
	e1++;
	e2++;
	e1.print();
	e2.print();
	engineer e3 = ++e2;
	e3.print();
	engineer e4("Ahmed", 25, "Architect");
	e4.print();
	// binary
	e4 = e1 - e2;
	cout << "New salary for ahmed=$" << e4.salary << endl;
	// string (binary)
	overload s1, s2, s3;
	char st1[50] = "Lil";
	char st2[50] = " Wayne";
	s1.set(st1);
	s2.set(st2);
	s3 = s1 + s2;
	s3.print();
	// []
	subscript s;
	s[6];
	// binary (example)
	circle c1(4), c2(3), c3;
	c3 = c1 * c2;
	c1.print_area();
	c2.print_area();
	c3.print_area();
}