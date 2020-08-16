#include <iostream>
#include <string>
#include <string.h>
using namespace std;
struct company {
	string name;
	string city;
};

struct item {
	string name;
	long ID;
	float price;
	company c;
	int amount;
};

void input_data(item it[]) {
	for (int i = 0; i < 5; i++) {
		cout << "~~~ ITEM " << i + 1 << " ~~~" << endl;
		cout << "Company name: "; cin >> it[i].c.name;
		cout << "City: "; cin >> it[i].c.city;
		cout << "Item name: ";
		cin >> it[i].name;
		cout << "ID: "; cin >> it[i].ID;
		cout << "Price: $"; cin >> it[i].price;
		cout << "Amount: "; cin >> it[i].amount;
		cout << endl;
	}
}

void output_data(item it[]) {
	cout << "Thanks for filling in the item details! Here is what we got from you." << endl;
	for (int i = 0; i < 5; i++) {
		cout << "~~~ ITEM " << i + 1 << " ~~~" << endl;
		cout << "Company name: " << it[i].c.name;
		cout << "City: " << it[i].c.city;
		cout << "Item name: " << it[i].name;
		cout << "ID: " << it[i].ID;
		cout << "Price: $" << it[i].price;
		cout << "Amount: " << it[i].amount;
		cout << endl;
	}
}

void search_byname(item it[]) {
	string name;
	cout << "Type item name: "; getline(cin, name);
	cout << "Item info for " << name << endl;
	for (int i = 0; i < 5; i++) {
		if (name == it[i].name) {
			cout << "Company name: " << it[i].c.name;
			cout << "City: " << it[i].c.city;
			cout << "Item name: " << it[i].name;
			cout << "ID: " << it[i].ID;
			cout << "Price: $" << it[i].price;
			cout << "Amount: " << it[i].amount;
			cout << endl;
		}
	}
}

void search_byprice(item it[]) {
	cout << "Searching for items with price greater than $150" << endl;
	for (int i = 0; i < 5; i++) {
		if (it[i].price > 150) {
			cout << " ~~~ ITEM " << i + 1 << " ~~~" << endl;
 			cout << "Company name: " << it[i].c.name;
			cout << "City: " << it[i].c.city;
			cout << "Item name: " << it[i].name;
			cout << "ID: " << it[i].ID;
			cout << "Price: $" << it[i].price;
			cout << "Amount: " << it[i].amount;
			cout << endl;
		}
	}
}

void el_araby(item it[]) {
	cout << "Items made by El-Araby company: " << endl;
	for (int i = 0; i < 5; i++) {
		if (it[i].c.name == "EL-araby") {
			cout << " ~~~ ITEM " << i + 1 << " ~~~" << endl;
			cout << "Company name: " << it[i].c.name;
			cout << "City: " << it[i].c.city;
			cout << "Item name: " << it[i].name;
			cout << "ID: " << it[i].ID;
			cout << "Price: $" << it[i].price;
			cout << "Amount: " << it[i].amount;
			cout << endl;
		}
	}
}

void search_byID(item it[]) {
	int ID;
	cout << "Enter ID: "; cin >> ID;
	for (int i = 0; i < 5; i++) {
		if (it[i].ID == ID) {
			cout << " ~~~ ITEM " << i + 1 << " ~~~" << endl;
			cout << "Company name: " << it[i].c.name;
			cout << "City: " << it[i].c.city;
			cout << "Item name: " << it[i].name;
			cout << "ID: " << it[i].ID;
			cout << "Price: $" << it[i].price;
			cout << "Amount: " << it[i].amount;
			cout << endl;
		}
	}
}

void maxamount(item it[]) {
	int max = it[0].amount;
	cout << "Item with the maximum amount: " << endl;
	for (int i = 0; i < 5; i++) {
		if (it[i].amount > max)
			max = it[i].amount;
	}

	for (int i = 0; i < 5; i++) {
		if (it[i].amount == max) {
			cout << " ~~~ ITEM " << i + 1 << " ~~~" << endl;
			cout << "Company name: " << it[i].c.name;
			cout << "City: " << it[i].c.city;
			cout << "Item name: " << it[i].name;
			cout << "ID: " << it[i].ID;
			cout << "Price: $" << it[i].price;
			cout << "Amount: " << it[i].amount;
		}
	}
}

void zero_amount(item it[]) {
	cout << "Searching for items with zero amount..." << endl;
	for (int i = 0; i < 5; i++) {
		if (it[i].amount == 0) {
			cout << "Item " << i + 1 << " Has zero amount. Details: " << endl;
			cout << "Company name: " << it[i].c.name;
			cout << "City: " << it[i].c.city;
			cout << "Item name: " << it[i].name;
			cout << "ID: " << it[i].ID;
			cout << "Price: $" << it[i].price;
			cout << "Amount: " << it[i].amount;
		}
	}
}

void menu() {
	cout << "Press 1 to fill database" << endl;
	cout << "Press 2 to output data in the database" << endl;
	cout << "Press 3 to search on item by name" << endl;
	cout << "Press 4 to search on item with price greater than $150" << endl;
	cout << "Press 5 to search on item made from a *EL-araby* company" << endl;
	cout << "Press 6 to search on item by ID" << endl;
	cout << "Press 7 to search for item with maximum amount" << endl;
	cout << "Press 8 to search if there is items with 0 amount" << endl;
	cout << "Press 9 to exit" << endl;
}
int main() {
	int n;
	item arr[5];
	cout << " ******* WELCOME TO OUR STORE ********" << endl;
	cout << "This is the official system for our items." << endl;
	cout << "Here is a menu that contains a list of actions." << endl;
	cout << "------------------------------------------------" << endl;
	menu();
	cout << "------------------------------------------------" << endl;
	cout << "Enter menu number: "; cin >> n;
	while (n != 9) {
		if (n == 1)
			input_data(arr);
		else if (n == 2)
			output_data(arr);
		else if (n == 3)
			search_byname(arr);
		else if (n == 4)
			search_byprice(arr);
		else if (n == 5)
			el_araby(arr);
		else if (n == 6)
			search_byID(arr);
		else if (n == 7)
			maxamount(arr);
		else if (n == 8)
			zero_amount(arr);
		cout << "Enter menu number: "; cin >> n;
	}
	cout << "--------------------------------------------------" << endl;
	cout << "The End" << endl;
}
