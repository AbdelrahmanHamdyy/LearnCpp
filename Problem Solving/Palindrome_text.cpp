#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	string text;
	bool pal = true;
	int i, j;
	cout << "*********** PALINDROME TEXT *************" << endl;
	cout << "This program determines if the entered text is a palindrome or not" << endl;
	cout << "Press enter when youre done entering the text." << endl;
	cout << "Enter any word: ";
	cin >> text;
	int n = text.length() - 1;
	for (i = 0,j = n; i < n, j >= 0; i++, j--) {
		if (text[i] != text[j])
			pal = false;
	}
	if (pal)
		cout << "Palindrome" << endl;
	else
		cout << "Not Palindrome" << endl;
}

