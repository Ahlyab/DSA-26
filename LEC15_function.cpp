#include <iostream>
#include <cmath>

using namespace std;

void changeNumber(int &a) // by reference
{
    a = 20;
    cout << "Inside function : " << a << endl; // 20
}

void printArray(int marks[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << marks[i] << " ";
    }
    cout << endl;
}

float avgArray(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }

    return sum / (float)size;
}

int main()
{
    int a = 10;
    cout << "Before function : " << a << endl; // 10
    changeNumber(a);
    cout << "After function : " << a << endl; // 20 10

    int marks[5] = {10, 20, 30, 50, 90};
    printArray(marks, 5);

    cout << avgArray(marks, 5) << endl;
}