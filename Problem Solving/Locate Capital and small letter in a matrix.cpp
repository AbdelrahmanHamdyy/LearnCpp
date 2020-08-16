#include <iostream>
using namespace std;

int main() {
    char a[3][3] = { 'A','K','g','m','D','l','p','J','B'};
    char b[9];
    char c[9];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    static int k = 0;
    static int m = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (a[i][j] >= 'A' && a[i][j] <= 'Z') {
                    b[k++] = a[i][j];
                    continue;
                }
                else {
                    c[m++] = a[i][j];
                    continue;
                }
            }
    }
    cout << "Capital: ";
    for (int i = 0; i < k; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    cout << "Small: ";
    for (int i = 0; i < m; i++) {
        cout << c[i] << " ";
    }
}