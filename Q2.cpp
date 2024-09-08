#include <iostream>
using namespace std;

int main()
{

    int n = 0;

    cout << "Enter a number : ";
    cin >> n;

    int res = 1;

    while (res < n)
    {
        res = res * 2;
    }

    if (res == n)
    {
        cout << "Yes, it's power of 2" << endl;
    }
    else
    {
        cout << "No, it's not power of 2" << endl;
    }

    // if (n & (n - 1) == 0)
    // {
    //     cout << "Yes, it's power of 2" << endl;
    // }
    // else
    // {
    //     cout << "No, it's not power of 2" << endl;
    // }

    return 0;
}