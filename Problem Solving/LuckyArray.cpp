#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int n;
	int ctr = 0;
	int array[200];
	cout << "This program determines if the array is lucky or not" << endl;
	cout << "Further context:" << endl;
	cout << "The array is lucky if the frequency of the minimum element is odd." << endl;
	cout << "Size of the array (n) could be between 0 and 200" << endl;
	cout << "Please enter the size of the array that you want" << endl;
	cout << "n = ";
	cin >> n;
	cout << "And now enter the values that you would like to be stored inside the array" << endl;
	for (int i = 0; i <= n - 1; i++) {
		cout << i + 1 << "- ";
		cin >> array[i];
		cout << endl;	
	}
	int min = array[0];
	for (int i = 0; i <= n - 1; i++) {
		if (array[i] < min)
			min = array[i];
	}
	for (int i = 0; i <= n - 1; i++) {
		if (min == array[i])
			ctr++;
	}
	if (ctr % 2 != 0)
		cout << "Lucky" << endl;
	else
		cout << "Unlucky" << endl;
	
}

