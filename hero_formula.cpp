#include <iostream>
#include <cmath>
using namespace std;

float hero_formula(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

int main()
{
    float a, b, c;

    cout << "Enter 3 sides : ";
    cin >> a >> b >> c;

    cout << "Area : " << hero_formula(a, b, c) << endl;
}