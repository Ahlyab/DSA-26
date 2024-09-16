#include <iostream>
using namespace std;

class Account
{
private:
    string name;
    int balance;

public:
    Account(string n, int b)
    {
        name = n;
        balance = b;
    }
    bool deposit(int amount)
    {
        if (amount < 0)
        {
            return false;
        }
        balance += amount;
        return true;
    }

    bool withdraw(int amount)
    {
        if (amount < 0 || amount > balance)
        {
            return false;
        }
        balance -= amount;
        return true;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Balance : " << balance << endl;
    }
};

int main()
{
    string name;
    int balance;

    cout << "Enter name : ";
    cin >> name;

    cout << "Enter balance : ";
    cin >> balance;

    Account obj(name, balance);

    int amount;

    cout << "Enter amount to deposit : ";
    cin >> amount;

    if (obj.deposit(amount))
    {
        cout << "Amount deposited successfully\n";
    }
    else
    {
        cout << "Invalid amount\n";
    }

    cout << "Enter amount to withdraw : ";
    cin >> amount;

    if (obj.withdraw(amount))
    {
        cout << "Amount withdrawn successfully\n";
    }
    else
    {
        cout << "Invalid amount\n";
    }

    obj.display();

    return 0;
}