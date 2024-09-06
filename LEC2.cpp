#include <iostream>
using namespace std;

int main()
{
    bool isRaining = true;
    bool hasUmbrella = false;

    if (isRaining && hasUmbrella)
    {
        cout << "You can go outside." << endl;
    }
    else if (isRaining && !hasUmbrella)
    {
        cout << "You can't go outside." << endl;
    }
    else if (!isRaining && hasUmbrella)
    {
        cout << "You can go outside." << endl;
    }

    // OR GATE
    bool tea = true;
    bool coldDrink = false;

    if (tea || coldDrink)
    {
        cout << "You can drink something." << endl;
    }
    else
    {
        cout << "You can't drink anything." << endl;
    }

    // OR GATE

    int a = 15;
    int b = 26;

    if (a < 10 || b < 10)
    {
        cout << "Good numbers" << endl;
    }
    else
    {
        cout << "BAD numbers" << endl;
    }

    // NOT GATE
    bool isSunny = false;

    if (!isSunny)
    {
        cout << "it's raining" << endl;
    }
    else
    {
        cout << "it's sunny" << endl;
    }

    return 0;
}