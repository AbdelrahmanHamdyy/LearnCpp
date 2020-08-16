#include <iostream>
#include <string>
using namespace std;
class student {
private:
	string* name;
	int* mark;
public:
	friend void pass(student s[] ,int size);
	student(string n, int m) {
		name = new string;
		mark = new int;
		*name = n;
		*mark = m;
	}
	student() {
		name = new string;
		mark = new int;
			cout << "Name: "; cin >> *name;
			cout << "Mark: "; cin >> *mark;
	}
	~student() {
		delete name;
		delete mark;
	}
};

void pass(student s[],int size) {
	int ctr = 0;
	for (int i = 0; i < size; i++) {
		if (*s[i].mark >= 50)
			ctr++;
	}
	cout << "The number of passing students = " << ctr << endl;
}
int main() {
	const int size = 5;
	student s[size];
	pass(s, size);
}
