#include <iostream>
using namespace std;

int main() {
    const int x = 4;
    int a[x][x];
    cout << "Enter the elements of this matrix." << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << "Element in row " << i + 1 << " and column " << j + 1 << " = "; cin >> a[i][j];
        }
    }
    cout << endl;
    cout << "***********************" << endl;
    cout << "Your array looks like this: " << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "***********************" << endl;
    cout << "Now we are going to replace the elements in the second diagonal with 0's" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if (i + j == 3 || i == j)
                a[i][j] = 0;
        }
    }
    cout << endl;
    cout << "Here is the result:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}