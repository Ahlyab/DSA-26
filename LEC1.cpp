/*
Operators in C++:
1. Arithmetic Operators
2. Relational Operators
3. Logical Operators
4. Bitwise Operators
5. Assignment Operators

Arithmetic Operators:
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Modulus (%) -> Remainder

Relational Operators:
1. Greater than (>)
2. Less than (<)
3. Greater than or equal to (>=)
4. Less than or equal to (<=)
5. Equal to (==)
6. Not equal to (!=)

Logical Operators:
1. Logical AND (&&)
2. Logical OR (||)
3. Logical NOT (!)

Bitwise Operators:
1. Bitwise AND (&)
2. Bitwise OR (|)
3. Bitwise XOR (^)
4. Bitwise NOT (~)
5. Left Shift (<<)
6. Right Shift (>>)

Assignment Operators:
1. Simple Assignment (=)
2. Addition Assignment (+=)
3. Subtraction Assignment (-=)
4. Multiplication Assignment (*=)
5. Division Assignment (/=)
6. Modulus Assignment (%=)
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double amount, discount = 0.0, tax, grandTotal;

    // Input the bill amount
    cout << "Enter the bill amount: ";
    cin >> amount; // 11000

    // Calculate discount
    // if (amount > 10000) {
    //     discount = amount * 0.10;  // 10% discount
    // } else if (amount > 5000) {
    //     discount = amount * 0.05;  // 5% discount
    // }

    if (amount > 5000 && amount <= 10000) // 000 > 5000
    {
        discount = amount * 0.05; // 5% discount
    }
    else if (amount > 10000)
    {
        discount = amount * 0.10; // 10% discount
    }

    // Calculate tax after discount
    double discountedAmount = amount - discount;
    tax = discountedAmount * 0.18; // 18% GST

    // Calculate grand total
    grandTotal = discountedAmount + tax;

    // Output the results
    cout << fixed << setprecision(2); // For displaying two decimal places
    cout << "Discount: " << discount << endl;
    cout << "Tax: " << tax << endl;
    cout << "Grand total: " << grandTotal << endl;

    return 0;
}

/*
int -> does not hold decimal values
float -> holds decimal values
double -> holds decimal values
difference between float and double -> memory allocation
float -> 4 bytes
double -> 8 bytes

----------------------------------------
Type casting:
1. Implicit Type Casting
2. Explicit Type Casting

Implicit Type Casting:
1. Smaller data type to larger data type
2. int -> float -> double
example:
int a = 10;
float b = a;


Explicit Type Casting:
1. Larger data type to smaller data type
2. double -> float -> int
example:
double a = 10.5;
int b = (int)a; // 10


syntax:
data_type variable_name = (data_type)value;
int b = (int)a;
-----------------------------------

int + int = int
int - int = int
int * int = int
int / int = int

int + float = float
10 + 10.5 = 20.5
int - float = float
int * float = float
int / float = float
*/

/*
1. Write a program to find the area of a circle.
2. Write a program to find the area of a rectangle.
3. create a program that takes number of small rooms and large rooms,
and cost per small room 10$ and large room 15$, and calculate the total cost.
calculate the tax of 6% on the total cost and print grand total.
*/

/*
solution problem 3
int small_rooms = 0, large_rooms = 0;

    cout << "Enter the number of small rooms: ";
    cin >> small_rooms;

    cout << "Enter the number of large rooms: ";
    cin >> large_rooms;

    const int cost_per_small_room = 10;
    const int cost_per_large_room = 15;

    int total_cost = (small_rooms * cost_per_small_room) + (large_rooms * cost_per_large_room);
    cout << "Total cost: " << total_cost << endl;

    // tax calculation
    const float tax_rate = 0.06; // 6%
    float tax = total_cost * tax_rate;

    // grand total
    float grand_total = total_cost + tax;
    cout << "Tax: " << tax << endl;
    cout << "Grand total: " << grand_total << endl;

*/