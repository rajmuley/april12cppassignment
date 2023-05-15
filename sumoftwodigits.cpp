#include <iostream>
using namespace std;



int main()
{

    int a, b, sum = 0;
    cout << "Enter first value : ";
    cin >> a;
    cout << "Enter second value : ";
    cin >> b;

    for (int i = 0; i <= (b - a); i++)
    {

        sum = (b - i) + sum;
    }
    cout << sum;

    return 0;
}