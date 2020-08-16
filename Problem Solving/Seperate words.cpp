#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "This program seperates words from a sentence." << endl;
    char sent[100];
    cout << "Type in any phrase: "; cin.getline(sent, 100);
    int i = 0;
    while (sent[i] != '\0') {
        if (sent[i] == ' ') {
            cout << endl;
        }
        else
            cout << sent[i];
        i++;
    }
}