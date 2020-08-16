#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
void toarray(int n) {
	vector <int> arr;
	int k = n; 
	int dig = 0;
	while (k > 0) {
		k /= 10;
		dig++;
	}
	int j = pow(10, dig - 1);
	for (int i = 0; i < dig; i++) {
		arr.push_back(n / j);
		n %= j;
		j /= 10;
	}
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void tonumber(vector <string>& a) {
	string num = "";
	for (int i = 0; i < a.size(); i++) {
		num += a[i];
	}
	cout << num << endl;
}
int main() {
	vector <string> b = { "2","4","1","7" };
	toarray(56178);
	tonumber(b);
}


