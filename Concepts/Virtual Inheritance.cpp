#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
// Virtual Inheritance (Hybr 
class a {
public:
	void display() {
		cout << "Hello\n";
	}
};
class b : virtual public a {

};
class c : virtual public a {

};
class d : public b, public c {

};
int main() {
	d dis;
	dis.display(); // We cannot call the display function because there are one in each base class so we need to add virtual before public
}