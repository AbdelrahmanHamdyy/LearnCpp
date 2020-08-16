#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
class student {
private:
	string* name;
	int* age;
	int* level;
	long* ID;
	float* mark;
	char* grade;
public:
	student() {
		name = new string;
		level = new int;
		ID = new long;
		age = new int;
		mark = new float;
		grade = new char;
	}
	void add() {
		cout << "Name:"; 
		cin >> *name;
		cout << "ID=";
		cin >> *ID;
		cout << "Age:";
		cin >> *age;
		cout << "Level=";
		cin >> *level;
		cout << "Mark(in %)=";
		cin >> *mark;
		cout << "Grade=";
		cin >> *grade;
	}
	void show() {
		cout << "Name:" << *name << endl;
		cout << "ID=" << *ID << endl;
		cout << "Age:" << *age << endl;
		cout << "Level=" << *level << endl;
		cout << "Mark=" << *mark << "%" << endl;
		cout << "Grade:" << *grade << endl;
		cout << "------------------" << endl;
	}
	void modify() {
		string ans;
	    Answer:
		cout << "Which info do you want to change? (Name/ID/Age/Level)\n";
		cout << "-->"; 
		cin >> ans;
		if (ans == "Name") {
			cout << "New Name:";
			cin >> *name;
		}
		else if (ans == "ID") {
			cout << "New ID:";
			cin >> *ID;
		}
		else if (ans == "Age") {
			cout << "Current Age:";
			cin >> *age;
		}
		else if (ans == "Level") {
			cout << "New Level:";
			cin >> *level;
		}
		else {
			cout << "INVALID! Make sure you enter the correct spelling." << endl;
			cout << "Note: You cannot edit the mark or grade!" << endl;
			goto Answer;
		}
	}
	void dlt() {
		*name = " ";
		*age = 0;
		*ID = 0;
		*level = 0;
		*mark = 0;
		*grade = 0;
	}
	~student() {
		delete name;
		delete ID;
		delete level;
		delete age;
		delete mark;
		delete grade;
	}
};
void menu(student s[]) {
	int n;
	int i = 0;
	cout << "                                          ==== STUDENT DATABASE MANAGEMENT SYSTEM ====" << endl;
	cout << "                                          ~ This Database is currently empty\n";
	cout << endl << endl;
	do {
		cout << "                                        Select one of the below options:" << endl;
		cout << "                                              1. Add Records" << endl;
		cout << "                                              2. List Records" << endl;
		cout << "                                              3. Modify Records" << endl;
		cout << "                                              4. Delete Records" << endl;
		cout << "                                              5. Exit" << endl;
		cout << "                                          Option:";
		cin >> n;
		switch (n) {
		case 1:
			s[i].add();
			i++;
			break;
		case 2:
			for (int j = 0; j < i; j++) {
				cout << "Record " << j + 1 << endl;
				s[j].show();
			}
			break;
		case 3:
			int rec_no;
			cout << "Choose a record to modify:";
			cin >> rec_no;
			s[rec_no - 1].modify();
			break;
		case 4:
			int rec;
			cout << "Choose a record to delete:";
			cin >> rec;
			s[rec - 1].dlt();
			cout << "~~~ DELETED RECORD ~~~" << endl;
			break;
		case 5:
			break; 
		}
	} while (n != 5);
		cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "Thank you for your time and have a nice day!" << endl;
}
int main() {
	student s[10];
	menu(s);
}