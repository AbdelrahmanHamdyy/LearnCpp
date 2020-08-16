#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
class company {
protected:
	string name;
	int age;
public:
	company() {
		cout << "Base default constructor" << endl;
	}
	company(string n, int a) :name(n), age(a) {
		cout << "Base parameterized constructor\n";
	}
	virtual void print() {
		cout << "Name:" << name << endl;
		cout << "Age:" << age << endl;
	}
	virtual void bonus() {}
};
class manager : public company {
protected:
	string position;
	float salary;
public:
	manager() {
		cout << "Manager default constructor" << endl;
	}
	manager(string n, int a, string pos, float s) : company(n, a), position(pos), salary(s) {
		cout << "Manager parameterized constructor\n";
	}
	void print() {
		cout << "~~~~~~~~~~~~~~ MANAGER ~~~~~~~~~~~~~~\n";
		company::print();
		cout << "Position:" << position << endl;
		cout << "Salary=$" << salary << endl;
	}
	void bonus() {
		cout << "We would like to give " << name << " a bonus as a reward of his incredible work" << endl;
		cout << "Bonus=$1000\n";
		cout << "Total Salary=$" << salary + 1000 << endl;
	}
};
class employee : public manager {
private:
	string skill;
public:
	employee() {
		cout << "Employee default constructor" << endl;
	}
	employee(string n, int a, string pos, float s, string sk) : manager(n,a,pos,s), skill(sk) {
		cout << "Employee parameterized constructor" << endl;
	}
	void print() {
		cout << "~~~~~~~~~~~~~~ EMPLOYEE ~~~~~~~~~~~~~~\n";
		company::print();
		cout << "Position:" << position << endl;
		cout << "Salary=$" << salary << endl;
		cout << "Skill:" << skill << endl;
	}
};
class student {
protected:
	string name;
	long ID;
	int year;
public:
	long get_ID() {
		return ID;
	}
	void get() {
		cout << "Name:";
		cin >> name;
		cout << "ID=";
		cin >> ID;
		cout << "Year=";
		cin >> year;
	}
	void print() {
		cout << "Thanks for filling your information. This is what we recieved from you:" << endl;
		cout << "Name:" << name << endl;
		cout << "ID=" << ID << endl;
		cout << "Year=" << year << endl;
	}
	void base() {
		cout << "Base class " << endl;
	}
};
class marks : public student{
	int mark[5];
public:
	void get() {
		student::get();
		cout << "-----------------------------------------------------" << endl;
		cout << "Now enter your marks out of 100 in the main 5 subjects:" << endl;
		cout << "Math=";
		cin >> mark[0];
		cout << "Physics=";
		cin >> mark[1];
		cout << "Chemistry=";
		cin >> mark[2];
		cout << "Biology=";
		cin >> mark[3];
		cout << "English=";
		cin >> mark[4];
	}
	void print() {
		student::print();
		cout << "~~~ MARKS ~~~" << endl;
		cout << "Math=" << mark[0] << endl;
		cout << "Physics=" << mark[1] << endl;
		cout << "Chemistry=" << mark[2] << endl;
		cout << "Biology=" << mark[3] << endl;
		cout << "English=" << mark[4] << endl;
	}
	void final() {
		float percent;
		float sum = 0;
		for (int i = 0; i < 5; i++) {
			sum += mark[i];
		}
		percent = (sum / 500) * 100;
		cout << "Final Percentage=" << percent << "%" << endl;
	}
};
void view() {
	cout << "                                         ____________STUDENT REPORT CARD_____________" << endl;
	cout << "                                         Select one of the below options:" << endl;
	cout << "                                               1.Add Record" << endl;
	cout << "                                               2.Show all Records" << endl;
	cout << "                                               3.List a specific record" << endl;
	cout << "                                               4.Calculate all percentages" << endl;
	cout << "                                               5.Calculate a specific percentage" << endl;
	cout << "                                               6.Exit" << endl;
	cout << "                                         Option--->";
}
void options(marks s[]) {
	int n;
	char ans;
	int i = 0;
	do {
		view();
		cin >> n;
		switch (n) {
		case 1:
			do {
				s[i].get();
				i++;
				cout << "Do you want to add another record? (Y/N) -> ";
				cin >> ans;
			} while (ans == 'Y');
			break;
		case 2:
			for (int j = 0; j < i; j++) {
				cout << "Record " << j + 1 << endl;
				s[j].print();
			}
			break;
		case 3:
			int c;
			cout << "Record->";
			cin >> c;
			s[c - 1].print();
			break;
		case 4:
			for (int a = 0; a < i; a++) {
				cout << "Record " << a + 1 << endl;
				s[a].final();
			}
			break;
		case 5:
			long x;
			cout << "Which student do you want to view his percentage?" << endl;
			cout << "Enter ID=";
			cin >> x;
			for (int y = 0; y < i; y++) {
				if (s[y].get_ID() == x)
					s[y].final();
			}
			break;
		default:
			break;
		}
	} while (n != 6);
	cout << "Thank you and have a good day!" << endl;
}
int main() {
	company* c1, * c2;
	manager m("Abdelrahman", 24, "HR", 25000);
	employee e("Mohamed", 23, "Worker", 10000, "Programming");
	c1 = &m;
	c2 = &e;
	c1->print();
	c1->bonus();
	c2->print();
	marks m1[10];
	options(m1);
}