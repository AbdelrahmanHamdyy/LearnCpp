#include <iostream>
#include <string>
using namespace std;
struct dist {
	int feet;
	int inches;
};
dist add(dist d1,dist d2) {
	dist d3;
	d3.feet = d1.feet + d2.feet;
	d3.inches = d1.inches + d2.inches;
	return d3;
}
void print(dist d) {
	cout << d.feet << " feet" << endl;
	cout << d.inches << " inches " << endl;
}
int main() {
	dist d, d1, d2;
	d1.feet = 10; d1.inches = 8;
	d2.feet = 7; d2.inches = 12;
	d = add(d1, d2);
	print(d);

}
