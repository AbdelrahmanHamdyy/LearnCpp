#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
string dy[7] = { "sat","sun","mon","tues","wed","thurs","fri" };
enum days {sat=1,sun,mon,tues,wed,thurs,fri};
enum activities {phone=1,lap,sport,gaming,youtube};
class week {
private:
	days d[7];
public:
	week() {
		cout << "New week\n";
	}
	void setday(days s[]) {
		for (int i = 0; i < 7; i++) {
			d[i] = s[i];
		}
	}
	void print() {
		for (int i = 0; i < 7; i++) {
			cout << d[i] << "- " << dy[i] << endl;
		}
	}
};
int main() {
	days da[7] = { sat,sun,mon,tues,wed,thurs,fri };
	activities a[5] = { phone,lap,sport,gaming,youtube };
	string act[5] = { "phone","lap","sport","gaming","youtube"};
	for (int i = 0; i < 5; i++) {
		cout << act[i] << "- " << a[i] << endl;
	}
	week w;
	w.setday(da);
	w.print();
}


