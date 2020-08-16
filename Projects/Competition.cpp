#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include "bank.h"
using namespace std;
class competition {
	string name;
	float votes;
	static float total;
public:
	competition() {}
	void get_data() {
		cout << "Name:";
		cin >> name;
		cout << "Number of votes=";
		cin >> votes;
		cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
	void print() {
		cout << "Name:" << name << endl;
		cout << "Number of votes=" << votes << endl;
		cout << "Percentage=" << (votes / total) * 100 << "%" << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
		
	}
	friend void winner(competition c[], int n);
	friend void percent(competition c[], int n);
};
float competition::total = 0;
void winner(competition c[], int n) {
	int max;
	int j = 0;
	max = c[0].votes;
	for (int i = 0; i < n; i++) {
		if (c[i].votes > max) {
			max = c[i].votes;
		}
	}
	while (max != c[j].votes) {
		j++;
	}
	cout << "WINNER! CONGRATULATIONS " << c[j].name << "!!" << endl;
	cout << "Name:" << c[j].name << endl;
	cout << "Highest votes=" << c[j].votes << endl;
}
void percent(competition c[], int n) {
	for (int i = 0; i < n; i++) {
		competition::total += c[i].votes;
	}
}
void welcome() {
	cout << "*******WELCOME TO THE OLYMPICS*******" << endl;
	cout << "Enter the required details for each candidate.\n";
}
int main() {
	welcome();
	const int siz = 5;
	competition c[siz];
	for (int i = 0; i < siz; i++) {
		cout << "Competitor " << i + 1 << endl;
		c[i].get_data();
	}
	percent(c, siz);
	for (int i = 0; i < siz; i++) {
		cout << "--Info recieved for candidate " << i + 1 << "--" << endl;
		c[i].print();
	}
	winner(c, siz);
}