#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
const int siz = 5;
class school {
	string name;
	float capital;
	int students;
	int classes;
	int level;
	char n1[50];
	char grades[siz];
public:
	school() {
		name = "Alafkar";
		capital = 8000;
		level = 1;
	}
	school(char n[]) {
		strcpy_s(n1,n);
	}
	school operator + (school n) {
		school s1;
		strcpy_s(s1.n1, n1);
		strcat_s(s1.n1, n.n1);
		return s1;
	}
	void printstr() {
		cout << n1 << endl;
	}
	school(string n, int c, int s) :name(n), classes(c),students(s) {
		capital = 50000;
		level = 10;
	}
	void operator ++ () {
		++level;
	}
	school operator - (school s) {
		school temp;
		temp.students = students - s.students;
		temp.classes = classes - s.classes;
		return temp;
	}
	void print() {
		cout << name << " " << capital << " " << level << " " << classes << " " << students << "\n";
	}
	char& operator [] (int index) {
		if (index < 0 || index >= siz)
			cout << "Out of Bounds" << endl;
		else
			return grades[index];
	}
};
int main() {
	char n1[50] = "Maisie";
	char n2[50] = " Williams";
	school str1(n1), str2(n2), str3;
	str3 = str1 + str2;
	str3.printstr();
	school s1("Global", 10000, 500);
	school s2("Wadi", 15000, 1200);
	school s3;
	++s1;
	++s2;
	s1.print();
	s2.print();
	s3 = s2 - s1;
	s3.print();
	school arr;
	for (int i = 0; i < siz; i++) {
		arr[i] = 'A';
	}
	for (int i = 0; i < siz; i++) {
		cout << arr[i] << "\n";
	}
}