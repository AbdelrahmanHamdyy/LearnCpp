#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>
#include <string.h>
using namespace std;

int main() {
	string x;
	string n = "";
	cin >> x;
	for (int i = x.size() - 1; i >= 0; i--) {
		n += x[i];
	}
	cout << n;

}

