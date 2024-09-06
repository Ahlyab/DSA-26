#include <iostream>
#include <string>
using namespace std;
/*
"RADAR"
"LEVEL"
"ROTOR"
"MADAM"
"DEIFIED"
*/
int main()
{
    string s;

    cout << "Enter a word : ";
    cin >> s;

    bool isPalindrome = true;

    for (int i = 0, j = s.size() - 1; i <= s.size() / 2; ++i)
    {
        if (s[i] != s[j])
        {
            isPalindrome = false;
            break;
        }
        --j;
    }

    if (isPalindrome) // false
    {
        cout << "It's a palindrome" << endl;
    }
    else
    {
        cout << "It's not a palindrome" << endl;
    }
}