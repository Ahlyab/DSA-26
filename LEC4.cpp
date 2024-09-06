/*
switch (expression)
{
case constant1:
    statement1;
    break;
case constant2:
    statement2;
    break;
default:
    statement3;
    break;
}

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    cout << "Enter a number: ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;

    default:
        cout << "Invalid Input" << endl;
        break;
    }

    return 0;
}

/*
write a program that input month number and print the month name using switch case

*/