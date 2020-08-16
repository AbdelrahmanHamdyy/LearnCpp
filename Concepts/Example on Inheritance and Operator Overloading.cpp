#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
class supermarket {
	string MarketName;
	string MarketAddress;
public:
	supermarket(string mn, string ma) :MarketName(mn),MarketAddress(ma) {}
	void print() {
		cout << "Market Name:" << MarketName << endl;
		cout << "Market Address:" << MarketAddress << endl;
	}
};
class product {
protected:
	string ProductName;
	float price;
public:
	product(string pn,float p) : ProductName(pn),price(p) {}
	void print() {
		cout << "Product Name:" << ProductName << endl;
		cout << "Price:" << price << endl;
	}
};
class client : public supermarket, public product  {
	string ClientName;
	float money;
public:
	client(string mn, string ma, string pn, float p,string cn,float m) :supermarket(mn,ma),product(pn,p),ClientName(cn),money(m) {}
	void print() {
		supermarket::print();
		product::print();
		cout << "Client Name:" << ClientName << endl;
		cout << "Money:" << money << endl;
		cout << "-----------------------" << endl;
	}
	void operator + (client c) {
		cout << "Total Money spent=$" << price + c.price << endl;
		cout << "Amount left for " << ClientName << "=$" << money - price << endl;
		cout << "Amount left for " << c.ClientName << "=$" << c.money - c.price << endl;
	}
};
int main() {
	client noor("Panda", "Jeddah", "Hairdryer", 15000, "Noor", 25000);
	noor.print();
	client sara("Ragab Sons", "Cairo", "Kitchen tools", 15000, "Sara", 30000);
	sara.print();
	noor + sara;
}