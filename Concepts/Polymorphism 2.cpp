#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
// Abstract Class
class CPolygon {
protected:
	int w, h;
public:
	void set(int a, int b) {
		w = a;
		h = b;
	}
	virtual int area() = 0; // The class became an abstract class which means we can only initialise pointers and not objects in main()
	void print() {
		cout << this->area() << endl;
	}
};
class CRectangle : public CPolygon {
public:
	int area() {
		return w * h;
	}
};
class CTriangle : public CPolygon {
public:
	int area() {
		return (w * h) / 2;
	}
};
int main() {
	CRectangle rect;
	CTriangle trig;
	// CPolygon poly; !error
	CPolygon* p1= &rect;
	CPolygon* p2 = &trig; // Early binding
	p1->set(4, 5);
	p2->set(7, 8);
	p1->print();
	p2->print();
	CPolygon* p[2] = { &rect,&trig };
	for (int i = 0; i < 2; i++) {
		p[i]->area(); // Late binding
		p[i]->print();
	}
}