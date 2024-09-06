#include <iostream>
using namespace std;

int main()
{
    // factorial problem

    int i = 1;
    int factorial = 1;
    int n = 3;

    while (i <= n) // 4 <= 3
    {
        factorial *= i; // 6
        i++;
    }

    cout << "Factorial of " << n << " is " << factorial << endl;

    return 0;
}