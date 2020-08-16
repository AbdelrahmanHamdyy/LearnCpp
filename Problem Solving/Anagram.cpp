#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main() {
	string word1;
	string word2;
	bool anagram = true;
	int ctr = 0;
	cout << "First word: "; cin >> word1;
	cout << "Second word: "; cin >> word2;
	if (word1.size() != word2.size())
		cout << "Not anagram" << endl;
	else {
		for (int i = 0; i < word1.size(); i++) {
			for (int j = 0; j < word1.size(); j++) {
				if (word1[i] == word2[j])
					ctr++;
			}
		}
		if (ctr <= word1.size())
			anagram = false;
		if (anagram)
			cout << "Anagram" << endl;
		else
			cout << "Not Anagram" << endl;
	}
}
