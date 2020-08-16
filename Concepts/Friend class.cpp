#include <iostream>
using namespace std;
class rectangle {
private:
	int w; // width
	int l; // length
public:
	rectangle() {
		w = 5;
		l = 10;
	}
	int Area() {
		return l * w;
	}
	int circumference() {
		return (l + w) * 2;
	}
	friend class square;
};

class square {
private:
	int s; // s for side
public:
	int Area(rectangle r) {
		s = r.w;
		return s * s;
	}
	int circumference(rectangle r) {
		s = r.w;
		return 4 * s;
	}
};
int main() {
	rectangle r;
	cout << r.Area() << endl;
	cout << r.circumference() << endl;
	square sq;
	cout << sq.Area(r) << endl;
	cout << sq.circumference(r) << endl;
}
