#include <iostream>
#include <string>
using namespace std;
class restaurant {
private:
	string rest_name;
	string food_name;
	float food_price;
public:
	restaurant(string rn, string fn, float fp) {
		rest_name = rn;
		food_name = fn;
		food_price = fp;
	}
	void print() {
		cout << "Welcome to " << rest_name << endl;
		cout << "Food ordered: " << food_name << endl;
		cout << "Price = $" << food_price << endl;
	}
	void discount() {
		cout << "Congratulations! You will get 5% discount on your order!" << endl;
		cout << "Price before discount = $" << food_price << endl;
		food_price = 0.95 * food_price;
		cout << "Price after discount = $" << food_price << endl;
		cout << "--------------------------------------------------------" << endl;
	}
};
int main() {
	restaurant* r1, * r2, * r3;
	r1 = new restaurant("Al Baik", "Cheese Burger", 15);
	r2 = new restaurant("McDonalds", "Big Mac", 30);
	r3 = new restaurant("Burger King", "Chicken Whopper", 40);
	r1->print();
	r1->discount();
	r2->print();
	r3->print();
	delete r1;
	delete r2;
	delete r3;
}
