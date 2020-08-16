#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
class student {
private:
	int age;
	string name;
	char mark;
	int level;
public:
	student(int a, string n, char g) {
		age = a;
		name = n;
		mark = g;
		level = 1;
	}
	void operator ++ (int) {
		age++;
		level++;
	}
	student operator ++ () {
		student temp(0, " ", ' ');
		temp.age = ++age;
		temp.level = ++level;
		return temp;
	}
	void operator -- () {
		age--;
		level--;
	}
	void operator -- (int) {
		--age;
		--level;
	}
	void print() {
		cout << "~~~ Student Info ~~~" << endl;
		cout << "Name:" << name << endl;
		cout << "Age:" << age << endl;
		cout << "Mark:" << mark << endl;
		cout << "LEVEL=" << level << endl;
	}
}; 

int main() {
	student S1(18, "Abdelrahman", 'A');
	student S2(21, "Ahmed", 'B');
	S2 = ++S1;
	S1.print();
	S2.print();
}


