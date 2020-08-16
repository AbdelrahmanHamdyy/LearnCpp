#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
/* ----------------VIRTUAL FUNCTIONS---------------:
- Inheritance
- Same function in base and derived classes
- Pointer to Object */
class CPolygon {
protected:
	int w, h;
public:
	void set(int a, int b) {
		w = a;
		h = b;
	}
	virtual int area() {
		return 0;
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
	CPolygon poly;
	CPolygon* p1, * p2, *p3; // Polymorphism
	p1 = &rect; // The base class pointer can be linked to the derived class obejects
	p2 = &trig;
	p3 = &poly;
	p1->set(4, 5);
	p2->set(7, 8);
	p3->set(10, 12);
	cout << p1->area() <<endl;
	cout << p2->area() << endl;
	cout << p3->area() << endl; //... This is invalid because the area function must be in the base class as well
	// We can solve this problem by creating a virtual function of the same characteristics, Its role is to tell the compiler that the derived classes have 
	// a function called area
	cout << rect.area() << endl;
	cout << trig.area() << endl;
	cout << poly.area() << endl;
}