#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
	int matrix[3][3] = { {8,2,5},{7,10,1},{3,3,6} };
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j)
				sum1 = sum1 + matrix[i][j];
		}
	}
	for (int i = 2; i >= 0; i--) {
		static int j = 0;
		sum2 = sum2 + matrix[i][j];
		j++;
	}
	cout << sum1 << endl;
	cout << sum2 << endl;
	int diff;
	diff = sum2 - sum1;
	if (diff < 0)
		diff = diff * (-1);
	cout << diff << endl;
}

