#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;
// Collatz Conjecture is applies to positive integers and counts the number of steps needed for a number to go back to 1
// It speculates that it is always possible to get back to 1
int collatz(int n)
{
    //Base case
    if (n == 1)
        return 0;
    // Even
    else if (n % 2 == 0) 
        return 1 + collatz(n / 2);
    else if (n % 2 != 0) 
        return 1 + collatz(3 * n + 1); 
}
int main() {
    cout << collatz(26);
}
