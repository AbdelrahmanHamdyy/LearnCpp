#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
class Vector {
private:
	int x, y;
public:
	Vector(int a, int b) {
		x = a;
		y = b;
	}
	void print() {
		cout << "x=" << x;
		cout << " y=" << y << endl;
	}
	Vector operator + (Vector v2) {
		int x1, y1;
		x1 = x + v2.x;
		y1 = y + v2.y;
		Vector sum(x1, y1);
		return sum;
	}
	Vector operator - (Vector v2) {
		int x1, y1;
		x1 = x - v2.x;
		y1 = y - v2.y;
		Vector diff(x1, y1);
		return diff;
	}
};
int main() {
	Vector v1(5, 7);
	Vector v2(2, 3);
	Vector v3 = v1 + v2;
	v1.print();
	v2.print();
	v3.print();
	v3 = v1 - v2;
	cout << "---------" << endl;
	v3.print();
}


