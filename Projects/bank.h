class bank {
private:
	char name[20];
	int acc_number;
	float balance;
public:
	bank(char n[20], int a, float b);
	void menu();
	void show();
	void edit();
	void deposit();
	void withdraw();
	friend void action(bank b[], int i);
};
void action(bank b[], int i);

