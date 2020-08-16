#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	cout << "********* PALINDROME NUMBERS ***********" << endl;
	cout << "This program determines if the entered number is a palindrome or not " << endl;
	cout << "Further context: " << endl;
	cout << "A palindrome number is one which can be read forwards same as backwards." << endl;
	int n, n1;
	cout << "Enter any number: ";
	cin >> n;
	n1 = n;
	int rev = 0;
	while (n != 0) {
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	cout << "Reversed Number= " << rev << endl;
	if (rev == n1)
		cout << "Palindrome" << endl;
	else
		cout << "Not Palindrome" << endl;
}

