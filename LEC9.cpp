#include <iostream>
using namespace std;

int main()
{
    /* nested loop : a loop within a loop is called nested loop
    1 iteration of outer loop will cause complete execution of inner loop

    */

    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}