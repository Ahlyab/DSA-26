#include <iostream>
using namespace std;

int main()
{
    // factorial

    int factorial = 1;
    int n = 0;

    cout << "enter a number : ";
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        factorial *= i; // factorial = factorial * i;
    }

    cout << "Factorial of " << n << " is " << factorial << endl;
}