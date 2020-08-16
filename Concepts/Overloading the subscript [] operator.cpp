#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
int const sizeofarray = 5;
class arrayover {
private:
	int arr[sizeofarray];
public:
	// without operator overloading:
	void insert(int index, int value) {
		if (index < 0 || index >= sizeofarray)
			cout << "Out of bounds\n";
		else
			arr[index] = value;
	}
	int get(int index) {
		if (index < 0 || index >= sizeofarray)
			cout << "Out of bounds\n";
		else
			return arr[index];
	}
	// with operator overloading:
	int& operator [] (int index) {
		if (index < 0 || index >= sizeofarray)
			cout << "Out of bounds\n";
		else
			return arr[index];
	}
};
int main() {
	// using functions
	arrayover a;
	a.insert(0, 5);
	a.insert(1, 16);
	a.insert(5, 12);
	cout << a.get(0) << " " << a.get(1) << endl;
	// using operator overloading
	a[2] = 8;
	cout << a[2] << endl;
}


