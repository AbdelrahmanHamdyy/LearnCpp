#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <string.h>
using namespace std;
void ident(vector <string>& vect) {
    int i = 0;
    int j = 0;
    while (i < vect.size()) {
        for (int k = 0; k < vect[i].size(); k++) {
            if (vect[i][j] != vect[i][k])
                vect.erase(vect.begin() + i);
        }
        i++;
    }
    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << " ";
    }
}
int main() {
    vector <string> newv = { "aaaaaaa","eee","hffja","ssfsf","sssssss","111111"};
    ident(newv);
}	


