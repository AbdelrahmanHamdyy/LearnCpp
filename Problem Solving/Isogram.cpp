#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main() {
	char word[100];
	cin.getline(word, 100);
	int ctr;
	int i = 0;
	int j = 0;
	bool iso = true;
	while (word[i] != '\0') {
		ctr = 0;
		while (word[j] != '\0') {
			if (word[i] == word[j])
				ctr++;
			j++;
		}
		if (ctr >= 2)
			iso = false;
		i++;
	}
	if (iso)
		cout << "iso";
	else
		cout << "not iso" << endl;
}