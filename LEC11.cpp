#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {0};

    for (int i = 0; i < 5; ++i)
    {
        cout << "Enter a number : ";
        cin >> arr[i];
    }

    int largest = 0, second_largest = 0;

    for (int i = 0; i < 5; ++i)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
    }

    cout << "Second largest : " << second_largest << endl;
}