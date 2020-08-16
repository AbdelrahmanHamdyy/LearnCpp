#include <iostream>
#include <string>
using namespace std;
class AlRafidain {
private:
	string name;
	int balance1;
public:
	friend class AlRasheed;
	AlRafidain(string n, int b) {
		name = n;
		balance1 = b;
	}
	void deposit(int dep) {
		balance1 += dep;
	}
	void withdraw(int wd) {
		balance1 -= wd;
	}
	int get_Balance() {
		return balance1;
	}
};

class AlRasheed {
private:
	string name;
	int balance;
public:
	friend class AlRafidain;
	AlRasheed(string n, int b) {
		name = n;
		balance = b;
	}
	void deposit(int dep) {
		balance += dep;
	}
	void withdraw(int wd) {
		balance -= wd;
	}
	int getBalance() {
		return balance;
	}
	void transfer(AlRafidain &Ahmed) {
		int amount;
		cout << "How much do you want to transfer from Ahmed to Ali = "; cin >> amount;
		while (amount > Ahmed.balance1) {
			cout << "Entered amount is greater than whats available in the balance. " << endl;
			cout << "Please try again: "; cin >> amount;
		}
		Ahmed.balance1 -=amount;
		balance += amount;
		cout << "Ahmed's balance after transfer = " << Ahmed.balance1 << endl;
		cout << "Ali's balance after transfer = " << balance << endl;
	}
};
int main() {
	AlRafidain ahmed("Ahmed", 1000);
	ahmed.deposit(5200);
	ahmed.withdraw(700);
	cout << "Ahmed's balance: " << ahmed.get_Balance() << endl;
	AlRasheed ali("Ali", 500);
	cout << "Ali's balance: " << ali.getBalance() << endl;
	ali.transfer(ahmed);
}
