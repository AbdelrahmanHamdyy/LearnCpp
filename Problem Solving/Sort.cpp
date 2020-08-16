#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	int num[10];
	int temp1;
	int temp2;
	cout << "Enter any 10 numbers: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << i + 1 << ": ";
		cin >> num[i];
	}
	cout << "Now we are going to sort these numbers in ascending order! " << endl;
	for (int k = 0; k < 9; k++) {
		for (int j = 0; j < 9; j++) {
			if (num[j] > num[j + 1]) {
				temp1 = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp1;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << num[i] << " ";
	}
	cout << endl;
	cout << "--------------------" << endl;
	cout << "And finally we can also sort them in descending order!" << endl;
	for (int k = 0; k < 9; k++) {
		for (int j = 0; j < 9; j++) {
			if (num[j] < num[j + 1]) {
				temp2 = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp2;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << num[i] << " ";
	}
}