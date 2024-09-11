#include <iostream>
using namespace std;

void printMenu(string dishes[], int price[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << i + 1 << ". " << dishes[i] << " : " << price[i] << endl;
    }
}

void takeOrder(int order[], int size)
{
    cout << "Select at least 3 dishes\nEnter your order (1-5) : ";
    for (int i = 0; i < 3; ++i)
    {
        cin >> order[i];
    }
}

bool checkOrderValidity(int order[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        if (order[i] < 1 || order[i] > 5)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    string dishes[5] = {"Biryani", "Pulao", "Karahi", "Korma", "Nihari"};
    int price[5] = {200, 150, 300, 250, 350};
    int order[3];
    printMenu(dishes, price, 5);
    takeOrder(order, 3);

    if (checkOrderValidity(order, 3) == false)
    {
        cout << "You have selected some item that is not in the menu\n";
        exit(0);
    }

    int total = 0;
    for (int i = 0; i < 3; ++i)
    {
        total += price[order[i] - 1];
    }

    float tax = total * 0.18;
    cout << "Total : " << total << endl;
    cout << "Tax : " << tax << endl;
    cout << "Grand Total : " << total + tax << endl;

    return 0;
}