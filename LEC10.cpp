/*
Arrays : collection of similar type of data.
it is created in continguous mmemory
syntax : datatype array_name[size]
example : int marks[5];

declaration :
            int marks[5];
initialization:
            int marks[5] = {0};

how to access an element?
we can access an element by using index;

arr_name[index];

how to modify an element?
we can modify an element by using index;

arr_name[index] = value;
*/

#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {0};

    // input
    for (int i = 0; i < 5; ++i)
    {
        cout << "Enter subject marks : ";
        cin >> marks[i];
    }

    int highestMarks = 0;
    int ObtainedMarks = 0;

    for (int i = 0; i < 5; ++i)
    {
        if (marks[i] > highestMarks)
        {
            highestMarks = marks[i];
        }

        ObtainedMarks += marks[i];
    }

    cout << "Highest Marks : " << highestMarks << endl;
    cout << "Obtained Marks : " << ObtainedMarks << endl;
}