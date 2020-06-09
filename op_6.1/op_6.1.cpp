#include <iostream>
#include <cmath>
#include "IseveralFunc.h"

using namespace std;

int main()
{
    cout << "Program starts!\n";

    cout << endl;
    cout << "Enter 1 to calculate function with 2 variables\n";
    cout << "Enter 2 to calculate function with 3 variables\n";
    cout << "Enter any other button to exit\n";


    int n = 0;
    cin >> n;
    switch (n)
    {
    case(1): {
        TwoVarFunc b;
        IseveralFunc* a = &b;
        cout << "Enter x: ";
        double n;
        cin >> n;
        //a->x = n;
        a->setX(n);
        cout << "Enter y: ";
        double m;
        cin >> m;
        //a->y = m;
        a->setY(m);
        cout << "Result: " << a->calculate();
        break;
    }
    case(2): {
        ThreeVarFunc c;
        IseveralFunc* a = &c;
        cout << "Enter x: ";
        double i;
        cin >> i;
        //a->x = i;
        a->setX(i);
        cout << "Enter y: ";
        double j;
        cin >> j;
        //a->y = j;
        a->setY(j);
        cout << "Enter z: ";
        double k;
        cin >> k;
        //a->z = k;
        a->setZ(k);
        cout << "Result: " << a->calculate();
        break;
    }
    default:
        break;
    }
    
}