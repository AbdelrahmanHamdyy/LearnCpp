#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;
void dub(int a[],int size) {
	int s[100];
	for (int i = 0; i < size; i++) {
		s[i] = a[i];
	}
	for (int i = 0; i < size; i++) {
		int sum = 0;
		for (int j = 0; j < i; j++) {
			sum += s[j];
		}
		a[i] = s[i] + sum;
	}
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
}
int main() {
	int x[6] = { 3,3,-2,408,3,3};
	dub(x, 6);
}
