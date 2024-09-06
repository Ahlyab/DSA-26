/*
string : anything written in double qoutes is called string. basically it's
a sequence of characters enclosed in double qoutes.

string is a derived data type
syntax :
    declaration:
        string str_name;
    initialization:
        string str_name = value;

important note:
    always include string header file before using string
    similar to arrays you can access each character of a string using
    array like syntax.

    example:
        string str = "Hello, Word!";
        cout << str[3] << endl; // output : l

important methods:
    1. size : it tells the size of the string
    example :
        string str = "Hello";
        cout << str.size() << endl;

    2. find : it tells whether a character is in the string or not
    example : it will be discussed in a separate program

Extra important note : use strings wherever possible instead of char array

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string name;

    // cout << "Enter your name : ";
    // // cin >> name;
    // getline(cin, name); // Ali Raza

    // // print character at index 2

    // cout << "index 2 : " << name[2] << endl;

    // cout << "size: " << name.size() << endl; // 8

    // cout << "Your name is " << name << endl;

    string str = "1234567890asdfghjklqwertyuiop";

    char ch = '\0';

    cout << "Enter a char : ";
    cin >> ch;

    cout << "String npos : " << string::npos << endl;
    cout << str.find(ch) << endl;

    if (str.find(ch) != string::npos)
    {
        cout << "Character found!" << endl;
    }
    else
    {
        cout << "Character Not Found!" << endl;
    }
}