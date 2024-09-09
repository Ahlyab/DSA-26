/*
function : a piece of code that performs a specific task

function prototype :
    return_type function_name(data_type1 parameter1, data_type2 parameter2, ...);

function definition :
    return_type function_name(data_type1 parameter1, data_type2 parameter2, ...)
    {
        // code
    }
    return types:
        void : no return value
        int : return integer value
        float : return float value
        double : return double value
        char : return character value
        bool : return boolean value

*/

#include <iostream>
using namespace std;

void printHello()
{
    cout << "Hello World" << endl;
}

float add(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}

float mul(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

void OperationMenu()
{
    cout << "Choose an operation : " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
}

int main()
{
    float n1, n2;

    cout << "Enter two numbers separated by space : ";
    cin >> n1 >> n2;

    OperationMenu();

    int choice;
    cout << "Enter your choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Addition : " << add(n1, n2) << endl;
        break;
    case 2:
        cout << "Subtraction : " << sub(n1, n2) << endl;
        break;
    case 3:
        cout << "Multiplication : " << mul(n1, n2) << endl;
        break;
    case 4:
        cout << "Division : " << divide(n1, n2) << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}