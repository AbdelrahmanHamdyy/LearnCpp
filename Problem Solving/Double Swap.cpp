#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <string.h>
using namespace std;
string doubleswap(string x, char a, char b) {
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == a)
            x[i] = b;
        else if (x[i] == b)
            x[i] = a;
    }
    return x;
}
int main() {
    string str;
    char a, b;
    cin >> str;
    cin >> a >> b;
    cout << doubleswap(str, a, b);
}	


