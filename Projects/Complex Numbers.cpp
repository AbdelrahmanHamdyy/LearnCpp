#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <string.h>
#include <cmath>
#include <ctype.h>
using namespace std;
struct complex {
private:
    int a;
    int b;
public:
    void get()
    {
        cout << "Real part=";
        cin >> a;
        cout << "Imaginary part=";
        cin >> b;
    }
    void print()
    {
        if (a > 0 && b > 0)
            cout << a << "+" << b << "i" << endl;
        else if (b == 0)
            cout << a << endl;
        else if (a == 0)
            cout << b << "i" << endl;
        else if (b < 0)
            cout << a << b << "i" << endl;
        else 
            cout << " " << endl;
    }
    void operator + (complex c)
    {
        cout << "Addition:" << endl;
        if ((b + c.b) < 0)
            cout << a + c.a << b + c.b << "i" << endl;
        else
            cout << a + c.a << "+" << b + c.b << "i" << endl;
    }
    void operator - (complex c)
    {
        cout << "Subtraction:" << endl;
        if ((b - c.b) < 0)
            cout << a - c.a << b - c.b << "i" << endl;
        else
            cout << a - c.a << "+" << b - c.b << "i" << endl;
    }
    void operator * (complex c)
    {
        cout << "Multiplication:" << endl;
        int x = (a * c.a) - (b * c.b);
        int y = (a * c.b) + (b * c.a);
        if (y < 0)
            cout << x << y << "i" << endl;
        else
            cout << x << "+" << y << "i" << endl;
    }
    void operator / (complex c)
    {
        complex c1 = c;
        c1.b *= (-1);
        int x = (a * c1.a) - (b * c1.b);
        int y = (a * c1.b) + (b * c1.a);
        int z = (c.a * c1.a) - (c.b * c1.b);
        cout << "Division:" << endl;
        if (y < 0)
            cout << float(x) / z << float(y) / z << "i" << endl;
        else
            cout << float(x) / z << "+" << float(y) / z << "i" << endl;
    }
};
void menu()
{
    int n;
    complex c[2];
    cout << "        ________________OPERATIONS ON COMPLEX NUMBERS_______________" << endl;
    cout << "Enter 2 complex numbers to apply these operations on:" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "~~ Complex Number " << i + 1 << ":" << endl;
        c[i].get();
    }
    do {
        cout << "              Now choose one of the below options:" << endl;
        cout << "              1.List\n";
        cout << "              2.Add\n";
        cout << "              3.Subtract\n";
        cout << "              4.Multiply\n";
        cout << "              5.Divide\n";
        cout << "              6.Exit\n";
        cout << "                            Option:";
        cin >> n;
        switch (n)
        {
        case 1:
            for (int i = 0; i < 2; i++) {
                cout << "Complex Number " << i + 1 << ":" << endl;
                c[i].print();
            }
            break;
        case 2:
            c[0] + c[1];
            break;
        case 3:
            c[0] - c[1];
            break;
        case 4:
            c[0] * c[1];
            break;
        case 5:
            c[0] / c[1];
            break;
        case 6:
            break;
        }
    } while (n != 6);
    cout << "Thanks and have a nice day!" << endl;
}
int main() {
    menu();
}