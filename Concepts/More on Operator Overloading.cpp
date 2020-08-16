#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
const int siz = 5;
class area {
private:
	int l;
	int w;
	int num;
	int a[siz];
public:
	friend int main();
	area(int n) {
		num = n;
	}
	area() {
		l = 0;
		w = 0;
	}
	area(int a, int b) {
		l = a;
		w = b;
	}
	area operator - () {
		l = -l;
		w = -w;
		return *this;
	}
	bool operator ! () {
		return (l == 0 && w == 0);
	}
	void print() {
		cout << "Length = " << l << endl;
		cout << "Width = " << w << "\n";
	}
	area operator += (area a) {
		l = l + a.l;
		w = w + a.w;
		return *this;
	}
	bool operator == (area a) {
		return (l == a.l && w == a.w);
	}
	int operator < (area a) {
		return (l < a.l && w < a.w);
	}
	area operator + (area a) {
		area s;
		s.l = l + a.l;
		s.w = w + a.w;
		return s;
	}
	area operator + (int n) {
		area t;
		t.l = l + n;
		t.w = w + n;
		return t;
	}
	operator int() {
		return int(num);
	}
	int& operator [] (int index) {
		if (index < 0 || index >= siz)
			cout << "Out of bounds" << endl;
		else
			return a[index];
	}
	friend area operator - (int n, area s);
	friend istream& operator >> (istream& input, area& a);
	friend ostream& operator << (ostream& output, area& a);
};
area operator - (int n, area s) {
	area p;
	p.l = n - s.l;
	p.w = n - s.w;
	return p;
}
istream& operator >> (istream& input, area& a) {
	input >> a.l >> a.w;
	return input;
}
ostream& operator << (ostream& output, area& a) {
	output << a.l << " " << a.w << endl;
	return output;
}
int main() {
	area a(4, 3),b(6,5),c;
	-a;
	if (!a)
		cout << "True" << endl;
	else
		cout << "False" << endl;
	a += b;
	a.print();
	b.print();
	if (a == b)
		cout << "Say it" << endl;
	else
		cout << "TROLLZ" << endl;
	if (a < b)
		cout << "Sucker for Pain" << endl;
	else
		cout << "YAYA" << endl;
	c = a + b;
	c.print();
	area d(2, 6);
	c = 10 - d;
	c.print();
	area r;
	cin >> r;
	cout << r;
	area e(7);
	int x = e;
	cout << x << endl;
	area o;
	for (int i = 0; i < 5; i++) {
		o.a[i] = i + 2;
	}
	o[2] = 10;
	cout << o[2] << endl;
}