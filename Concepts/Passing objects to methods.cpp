#include <iostream>
#include <string>
using namespace std;
class Distance {
private:
	int feet;
	int inches;
public:
	Distance() {
	}
	Distance(int a, int b) : feet(a),inches(b){
	}
	Distance add(Distance d2) {
		Distance sum;
		sum.feet = feet + d2.feet;
		sum.inches = inches + d2.inches;
		return sum;
	}
	void print() {
		cout << feet << " feet" << endl;
		cout << inches << " inches" << endl;
	}
}; 
int main() {
	Distance d1(6,8);
	Distance d2(9,10);
	Distance d3 = d1.add(d2);
	d3.print();
}
