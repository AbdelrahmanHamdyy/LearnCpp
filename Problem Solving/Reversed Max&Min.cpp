#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int array[5] = { 10,5,2,4,15 };
	int max = array[0];
	int min = array[0];
	int rep;
	for (int i = 0; i <= 4; i++) {
		cout << array[i] << " ";
	}
	for (int k = 0; k <= 4; k++) {
		if (array[k] > max)
			max = array[k];
		else if (array[k] < min)
			min = array[k];
	}
	for (int i = 0; i <= 4; i++) {
		for (int j = 4; j >= 0; j--) {
			if (array[i] == max && array[j] == min) {
				rep = array[i];
				array[i] = array[j];
				array[j] = rep;
			}		
		}
	}
	cout << endl;
	cout << "Reversed max and min order :" << endl;
	for (int i = 0; i <= 4; i++) {
		cout << array[i] << " ";
	}
}

