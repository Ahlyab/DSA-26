/*
Assignment Operators:
1. Simple Assignment (=)
2. Addition Assignment (+=)
3. Subtraction Assignment (-=)
4. Multiplication Assignment (*=)
5. Division Assignment (/=)
6. Modulus Assignment (%=)
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    a = a + b; // a = 30
    a += b;    // a = a + b;

    cout << a << endl;

    a = a - b; // a = 10
    a -= b;    // a = a - b;

    a = a * b; // a = 200
    a *= b;    // a = a * b;

    a = a / b; // a = 10
    a /= b;    // a = a / b;

    a = a % b; // a = 10
    a %= b;    // a = a % b;

    return 0;
}

/*
create a calculator program that performs the following operations:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
use assignment operators to perform the above operations

output :
Enter two numbers: 10 20
enter operation:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
Enter your choice: 1
Result: 30
*/