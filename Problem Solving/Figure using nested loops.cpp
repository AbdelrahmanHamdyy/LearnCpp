#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main() {
    for (int i = 1; i <= 9; i+=2) {
        for (int j = 7; j >= i; j -= 2)
            cout << " ";
        for (int k = 1; k <= i; k++)
            cout << i;
        cout << endl;
    }
    for (int i = 7; i >= 1; i -= 2) {
        for (int j = 7; j >= i; j -= 2)
            cout << " ";
        for (int k = 1; k <= i; k++)
            cout << i;
        cout << endl;
    }
}