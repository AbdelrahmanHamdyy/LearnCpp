#include <iostream>
#include <string>
using namespace std;
class bank {
private:
	string* name;
	int* age;
	string* nationality;
	float* balance;
public:
	friend void operation(bank& b);
	bank() {
		name = new string;
		age = new int;
		nationality = new string;
		balance = new float;
		cout << "Welcome to the CSE Bank!" << endl;
		cout << "Please enter your personal and bank details" << endl;
		cout << "Name: "; getline(cin, *name);
		cout << "Age: "; cin >> *age;
		cout << "Nationality: "; cin >> *nationality;
		cout << "Balance = $"; cin >> *balance;
	}
	void print() {
		cout << "Thanks for filling your info. This is what we got from you:" << endl;
		cout << "Name: " << *name << endl;
		cout << "Age: " << *age << endl;
		cout << "Nationality: " << *nationality << endl;
		cout << "Balance = $" << *balance << endl;
	}
	void deposit() {
		int dep;
		cout << "How much do you want to add into your balance?" << endl;
		cout << "Amount = "; cin >> dep;
		*balance += dep;
		cout << "We have added $" << dep << " to your balance" << endl;
		cout << "Current balance = $" << *balance << endl;
	}
	void withdraw() {
		int wd;
		cout << "How much do you want to withdraw from your balance?" << endl;
		cout << "Amount = "; cin >> wd;
		*balance -= wd;
		cout << "$" << wd << " has been taken from your account" << endl;
		cout << "Current balance = $" << *balance << endl;
	}
	~bank() {
		delete name;
		delete age;
		delete nationality;
		delete balance;
	}
};

void operation(bank& b) {
	int num;
	string y;
	cout << "Advance? ---> "; cin >> y;
	if (y == "yes") {
		while (y == "yes") {
			cout << "What actions do you want to perform?" << endl;
			cout << "1. Deposit" << endl;
			cout << "2. Withdraw" << endl;
			cout << "3. No action" << endl;
			cout << "Number: "; cin >> num;
			switch (num) {
			case 1:
				b.deposit();
				break;
			case 2:
				b.withdraw();
				break;
			case 3:
				break;
			}
			if (num == 1 || num == 2) {
				cout << "Do you wish to continue? ---> "; cin >> y;
			}
			else
				y = "No";
		}
	}
	cout << "Your Final balance is = $" << *b.balance << endl;
	cout << "Thanks for your cooperation! Goodbye.." << endl;
}
int main() {
	bank b1;
	b1.print();
	operation(b1);
}

