#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int getTotal(int array[3][3]) {
	int Total = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			Total += array[i][j];
		}
	}
	return Total;
}
int getRowTotal(int array[3][3],int r) {
	int total = 0;
	for (int i = 0; i < 3; i++) {
		total += array[r][i];
	}
	return total;
}
int getColumnTotal(int array[3][3], int r) {
	int total = 0;
	for (int i = 0; i < 3; i++) {
		total += array[i][r];
	}
	return total;
}
int getAverage(int array[3][3]) {
	int sum = 0;
	int avg = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sum += array[i][j];
		}
	}
	avg = sum / 9;
	return avg;
}
int getHighestInRow(int array[3][3], int r) {
	int max;
	max = array[r][0];
	for (int i = 0; i < 3; i++) {
		if (array[r][i] > max)
			max = array[r][i];
	}
	return max;
}
int getLowestInRow(int array[3][3], int r) {
	int min;
	min = array[r][0];
	for (int i = 0; i < 3; i++) {
		if (array[r][i] < min)
			min = array[r][i];
	}
	return min;
}
int main() {
	cout << "Hey there! Lets have some fun with matrices!" << endl;
	cout << "-------------------------------------------" << endl;
	int r1,r2,r3, c;
	int matrix[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Row " << i + 1 << " / Column " << j + 1 << endl;
			cout << " --> ";
			cin >> matrix[i][j];
		}
	}
	cout << "Your array looks like this: " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << "The Total of all the values inside the array: " << getTotal(matrix) <<endl;
	cout << "Average of all the values in the matrix: " << getAverage(matrix) << endl;
	cout << "We can get the total of values in a certain row: ";
	cin >> r1;
	cout << "Sum of the values in row " << r1 << " is: " << getRowTotal(matrix, r1 - 1) << endl;
	cout << "And in a certain column as wel! = ";
	cin >> c;
	cout << "Sum of values in column " << c << " is: " << getColumnTotal(matrix, c - 1) << endl;
	cout << "We can also find the highest value in a row ... r= ";
	cin >> r2;
	cout << "Highest value in row " << r2 << " is: " << getHighestInRow(matrix, r2 - 1) << endl;
	cout << "And finally the lowest value in a certain row too.. r= ";
	cin >> r3;
	cout << "Lowest value in row " << r3 << " is: " << getLowestInRow(matrix, r3 - 1) << endl;
}
