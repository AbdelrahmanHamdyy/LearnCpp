#include <iostream>
#include <string>
using namespace std;
class student {
	string name;
	int mark[5];
public:
	friend void avg(student std[], int size);
	student() {
		cout << "Name: "; cin >> name;
		for (int i = 0; i < 5; i++) {
			cout << "Mark #" << i + 1 << ": "; cin >> mark[i];
		}
	}
};

void avg(student std[] , int size) {
	int sum;
	for (int i = 0; i < size; i++) {
		sum = 0;
		for (int j = 0; j < 5; j++) {
			sum += std[i].mark[j];
		}
		cout << "Average for " << std[i].name <<" is " << float(sum / 5) << endl;
	}
}
int main() {
	const int size = 3;
	student s[size];
	avg(s, 3);
}
