#include <iostream>
#include <string>
using namespace std;
class point {
private:
	int x;
	int y;
public:
	point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void print() {
		cout << x << " " << y << endl;
	}
	void move(int s) {
		x += s;
	}
	void moveup(int r) {
		y += r;
	}
};
class line {
private:
	point startp;
	point endp;
	string color;
public:
	line(int x1, int y1, int x2, int y2, string c) :startp(x1,y1), endp(x2,y2){
		color = c;
	}
	void print() {
		startp.print();
		endp.print();
		cout << color << endl;
	}
	void moveline(int s) {
		startp.move(s);
		endp.move(s);
	}
	void change_color(string s) {
		color = s;	
	}
};
int main() {
	line* l1;
	l1 = new line(1, 2, 5, 6, "Yellow");
	l1->print();
	l1->moveline(8);
	l1->change_color("Green");
	l1->print();
	delete l1;
	point* p;
	p = new point(1, 1);
	p->print();
	p->moveup(7);
	p->print();
	delete p;
}
