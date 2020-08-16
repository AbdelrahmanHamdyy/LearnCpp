#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
int factorial(int n) {
	long fact = 1;
	int x;
	int count = 0;
	int i;
	for (i = 1; i < n; i++) {
		fact *= (i + 1);
	}
	while (fact >= 1) {
		x = fact % 10;
		if (x == 0)
			count++;
		fact /= 10;
	}
	return count;
}
int main() {
	cout << factorial(5);
}