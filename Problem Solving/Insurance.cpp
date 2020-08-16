#include <iostream>
#include <string.h>
#include <string>
using namespace std;
class car {
private:
	string* brand;
	int* model;
	string* color;
	float* price;
public:
	car() {
		brand = new string;
		model = new int;
		color = new string;
		price = new float;
		cout << "Welcome to our insurance company! " << endl;
		cout << "Please fill in your car details to determine your price." << endl;
		cout << "Enter your car's brand: "; cin >> *brand;
		cout << "Enter your model year: "; cin >> *model;
		cout << "What color is your car? ~~ Color: "; cin >> *color;
		cout << "And finally what price did you buy your car for? ~~ Price = $"; cin >> *price;
	}
	void print() {
		cout << "_____________________" << endl;
		cout << "Thanks for filling in your info! This is what we got from you." << endl;
		cout << "Your Car details: " << endl;
		cout << "Type: " << *brand << endl;
		cout << "Model: " << *model << endl;
		cout << "Color: " << *color << endl;
		cout << "---------------------" << endl;
	}
	void display_price();
	friend void increase(car& c);
	~car() {
		delete brand;
		delete model;
		delete color;
		delete price;
	}
};

void car::display_price() {
	cout << "Previous price = $" << *price << endl;
}
void increase(car& c) {
	*c.price += 1000;
	cout << "New Price = $" << *c.price << endl;
}
int main() {
	car c1;
	c1.print();
	c1.display_price();
	increase(c1);
}