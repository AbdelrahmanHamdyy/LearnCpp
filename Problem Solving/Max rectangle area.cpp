#include <iostream>
#include <string>
using namespace std;
class rectangle {
private:
	int l;
	int w;
public:
	rectangle(int W,int L) : w(W) , l(L) {}
	rectangle() {
		cout << "Length = "; cin >> l;
		cout << "Width = "; cin >> w;
	}
	friend void max_area(rectangle rect[]);
	void print();
	int area() {
		return l * w;
	}
};

void rectangle::print() {
	cout << "L = " << l << endl;
	cout << "W = " << w << endl;
}

void max_area(rectangle rect[]) {
	int j;
	int max = rect[0].area();
	for (int i = 0; i < 4; i++) {
		if (rect[i].area() > max) {
			max = rect[i].area();
			j = i + 1;
		}
	}
	cout << "The biggest rectangle is number " << j << " and has an area of " << max << endl;;
}
int main() {
	rectangle r[4];
	max_area(r);
}
