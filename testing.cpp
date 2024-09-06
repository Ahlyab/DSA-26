#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int i, count = 0;
    cout << "enter the string:";
    getline(cin, str);
    for (i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    cout << "count : " << count;

    return 0;
}