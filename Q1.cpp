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

    for (int i = 4, j = 0; j <= 5 / 2; i--, j++)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}