#include <iostream>
#include <string>
#include <string.h>
#include "bank.h"
using namespace std;

bank::bank(char n[20], int a, float b) {
	strcpy_s(name,n);
	acc_number = a;
	balance = b;
}

void bank::menu() {
	int n;
	do {
		cout << "Select one option from below:\n";
		cout << "     1----> Show your info\n";
		cout << "     2----> Edit your account details\n";
		cout << "     3----> Quit\n";
		cout << "Option:"; cin >> n;
		if (n == 1)
			show();
		else if (n == 2)
			edit();
	} while (n != 3);
	if (n == 3)
		cout << "Thanks for your company. Have a good day!\n";
}

void bank::show()
{
	cout << "Account Number=" << acc_number << endl;
	cout << "Name:" << name << endl;
	cout << "Balance=$" << balance << endl;
}

void bank::edit()
{
	int x;
	string s;
	do {
		cout << "Which piece of information do you want to change?\n";
		cout << "1.Name\n";
		cout << "2.Account number\n";
		cout << "3.Balance\n";
		cout << "4.All\n";
		cin >> x;
		if (x < 1 && x > 4)
			cout << "Please choose one of these 4 choices only! ";
	} while (x < 1 && x > 4);
	if (x == 1) {
		cout << "New name:";
		cin >> name;
	}
	else if (x == 2) {
		cout << "New Account Number=";
		cin >> acc_number;
	}
	else if (x == 3) {
		cout << "Do you want to deposit or withdraw?\n";
		cout << "--> "; 
		cin >> s;
		if (s == "deposit")
			deposit();
		else
			withdraw();
	}
	else if (x == 4) {
		cout << "New name:"; cin >> name;
		cout << "New Account number="; cin >> acc_number;
		cout << "New Balance=$"; cin >> balance;
	}
}

void bank::deposit() {
	float n;
	cout << "Amount to be added=$";
	cin >> n;
	balance += n;
	cout << "New balance=$" << balance << endl;
}

void bank::withdraw() {
	float n;
	string ans;
	cout << "Amount to be taken=$"; 
	cin >> n;
	while (n > balance) {
		cout << "Not enough balance. Are you sure that you want to be in debt? (yes/no) -> ";
		cin >> ans;
		if (ans == "no") {
			cout << "Re-enter: Amount to be taken=$";
			cin >> n;
		}
		else
			break;
	}
	balance -= n;
	cout << "New balance=$" << balance <<endl;
}

void action(bank b[], int i) {
	b[i].menu();
}
