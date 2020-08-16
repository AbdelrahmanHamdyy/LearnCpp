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
	friend void display_price(car& c);
	car(string b, int m, string c, float p) {
		brand = new string;
		model = new int;
		color = new string;
		price = new float;
		*brand = b;
		*model = m;
		*color = c;
		*price = p;
	}
	void print() {
		cout << "Check out our brand new car! Here is all you need to know: " << endl;
		cout << "Type: " << *brand << endl;
		cout << "Model: " << *model << endl;
		cout << "Color: " << *color << endl;
		cout << "---------------------" << endl;
	}
	~car() {
		delete brand;
		delete model;
		delete color;
		delete price;
	}
};

void display_price(car& c) {
	string okay;
	cout << "The Final price of this " << *c.brand << " is = $" << *c.price << endl;
	cout << "Would like to confirm the purchase? " << endl;
	cin >> okay;
	if (okay == "Yes")
		cout << "~~~~~~~~~~~ CONGRATULATIONS YOU HAVE SUCCESSFULLY PURCHASED THIS " << *c.model << " " << *c.brand << " CAR! ~~~~~~~~~~" << endl;
	else
		cout << "Its okay! Good luck..." << endl;
}

int main() {
	string type = "Mercedes Benz";
	int m = 2019;
	string color = "Black";
	float cost = 50000;
	car c1(type, m, color, cost);
	c1.print();
	display_price(c1);
}