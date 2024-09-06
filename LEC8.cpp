#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    cout << "Enter a number : ";
    cin >> n;

    int fact = 1, i = 1;

    do
    {
        fact *= i;
        ++i;
    } while (i <= n);

    cout << "Factorial : " << fact << endl;
}