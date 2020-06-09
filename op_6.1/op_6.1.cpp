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
        cout << "Enter x: ";
        double n;
        cin >> n;
        a.setX(n);
        cout << "Enter y: ";
        double m;
        cin >> m;
        a.setY(m);
        cout << "Result: " << a.calculate(n, m);
        break;
    }
    case(2): {
        cout << "Enter x: ";
        double i;
        cin >> i;
        b.setX(i);
        cout << "Enter y: ";
        double j;
        cin >> j;
        b.setY(j);
        cout << "Enter z: ";
        double k;
        cin >> k;
        b.setZ(k);
        cout << "Result: " << b.calculate(i, j, k);
        break;
    }
    default:
        break;
    }
}