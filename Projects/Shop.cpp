#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;
class cashRegister {
private:
    int cash_on_hand;
public:
    cashRegister(): cash_on_hand(500) {}
    cashRegister(int n) : cash_on_hand(n) {}
    int getCurrentBalance() {
        return cash_on_hand;
    }
    void acceptAmount(int n) {
        cash_on_hand += n;
    }
};
class dispenserType {
private:
    int numberOfItems;
    int cost;
public:
    dispenserType(): numberOfItems(50), cost(50) {}
    dispenserType(int n1, int n2): numberOfItems(n1), cost(n2) {}
    int getNoOfItems() {
        return numberOfItems;
    }
    int getCost() {
        return cost;
    }
    void makeSale() {
        numberOfItems--;
    }
};
void showSelection();
void sellProduct(dispenserType& product, cashRegister& pCounter);
int main()
{
	cashRegister counter;
	dispenserType candy(100, 50);
	dispenserType chips(100, 65);
	dispenserType gum(75, 45);
	dispenserType cookies(50, 85);
	int choice;
	showSelection();
	cin >> choice;
	while (choice != 5)
	{
		switch (choice)
		{
		case 1:
			sellProduct(candy, counter);
			break;
		case 2:
			sellProduct(chips, counter);
			break;
		case 3:
			sellProduct(gum, counter);
			break;
		case 4:
			sellProduct(cookies, counter);
			break;
		default:
			cout << "Invalid selection." << endl;
		}
		showSelection();
		cin >> choice;
	}
	return 0;
}

void showSelection()
{
	cout << "*** Welcome to Candy Shop ***" << endl;
	cout << "To select an item, enter " << endl;
	cout << "1 for Candy" << endl;
	cout << "2 for Chips" << endl;
	cout << "3 for Gum" << endl;
	cout << "4 for Cookies" << endl;
	cout << "5 to exit" << endl;
}

void sellProduct(dispenserType& product, cashRegister& pCounter)
{
	int amount; //variable to hold the amount entered
	int amount2; //variable to hold the extra amount needed
	if (product.getNoOfItems() > 0) //if the dispenser is not empty
	{
		cout << "Please deposit " << product.getCost() << " cents" << endl;
		cin >> amount;
		if (amount < product.getCost())
		{
			cout << "Please deposit another " << product.getCost() - amount << " cents" << endl;
			cin >> amount2;
			amount = amount + amount2;
		}

		if (amount >= product.getCost())
		{
			pCounter.acceptAmount(amount);
			product.makeSale();
			cout << "Collect your item at the bottom and " << "enjoy." << endl;
		}

		else
			cout << "The amount is not enough. " << "Collect what you deposited." << endl;
		cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl << endl;
	}
	else
		cout << "Sorry, this item is sold out." << endl;
}
