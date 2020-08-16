#include <iostream>
using namespace std;
class point {
private:
	int* x;
	int* y;
public:
	friend int sum(point &p);
	point() {
		x = new int;
		y = new int;
		*x = 0;
		*y = 0;
	}
	point(int a, int b) {
		x = new int;
		y = new int;
		*x = a;
		*y = b;
	}
	~point() {
		delete x;
		delete y;
	}
};

int sum(point &p) {
	return *p.x + *p.y;
}
int main() {
	point p1;
	point p2(10, 20);
	cout << sum(p1) << endl;
	cout << sum(p2) << endl;
}