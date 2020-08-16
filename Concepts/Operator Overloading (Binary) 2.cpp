#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
class hiphop {
private:
	char str[100];
public:
	hiphop() {
		strcpy_s(str, " ");
	}
	hiphop(char s[]) {
		strcpy_s(str, s);
	}
	void print() {
		cout << str << endl;
	}
	hiphop operator + (hiphop h) {
		hiphop temp;
		strcpy_s(temp.str, str);
		strcat_s(temp.str, h.str);
		return temp;
	}
};
int main() {
	char rap[5] = "Tory";
	char rap2[7] = " Lanez";
	hiphop s1(rap);
	hiphop s2(rap2);
	hiphop s3 = s1 + s2;
	s3.print();
}


