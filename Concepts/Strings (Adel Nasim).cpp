#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
using namespace std;
// MORE ABOUT STRINGS
int main() {
	string x = "Computer";
	string y;
	// assign
	y.assign(x); // y = x;
	// at(index)
	cout << x.at(0); // Output: C
	// substr
	cout << x.substr(1, 3); // Output: omp
	cout << x.substr(3); // Output: uter
	// find
	cout << x.find("p") << endl; // Output: 3
	// rfind -> from right to left
	cout << x.rfind("e") << endl; // Output: 6
	// erase
	cout << x.erase(0, 3) << endl; // erase from index 0 to 3
	cout << x.erase(3) << endl; // erase characters from index 3 onwards
	// replace (index, how many chars, string)
	cout << x.replace(4, 4, "science") << endl; // Output: Compscience
	// insert (index, string)
	cout << x.insert(0, "IT") << endl; // Output: ITComputer
}
