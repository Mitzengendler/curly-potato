#include <iostream>
#include <cmath>
#include "IseveralFunc.h"

using namespace std;

int main()
{
    cout << "Program starts!\n";
    cout << "Enter 1 to calculate function with 2 variables\n";
    cout << "Enter 2 to calculate function with 3 variables\n";
    int n = 0;
    TwoVarFunc a;
    ThreeVarFunc b;
    cin >> n;
    switch (n)
    {
    case(1): {
        cout << a.calculate(1, 1);
        break;
    }
    case(2): {
        cout << b.calculate(1, 1, 1);
        break;
    }
    default:
        break;
    }
}