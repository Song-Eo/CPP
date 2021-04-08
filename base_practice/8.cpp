#include <iostream>
#include "CalClass.h"

using namespace std;

int main()
{
    Calculator cal;
    int select;
    double a, b;
    while (true)
    {
        cal.ShowMenu();
        cin >> select;
        if (select == 1 or select == 2 or select == 3 or select == 4)
        {
            cout << "Enter the Two Number: ";
            cin >> a >> b;
            if (select == 1)
            {
                cout << cal.Add(a, b) << endl;
            }
            else if (select == 2)
            {
                cout << cal.Min(a, b) << endl;
            }
            else if (select == 3)
            {
                cout << cal.Mul(a, b) << endl;
            }
            else if (select == 4)
            {
                cout << cal.Div(a, b) << endl;
            }
        }
        else
        {
            if (select == 5)
            {
                cal.ShowOpCount();
            }
            else if (select == 6)
            {
                cout << "Program Exit";
                return 0;
            }
            else
            {
                cout << "Error(Wrong Number)";
            }
        }
    }
}