#include <iostream>

using namespace std;

class Calculator
{
private:
    double a, b;
    int Count[4] = {0, 0, 0, 0};

public:
    void ShowMenu()
    {
        cout << "------Calculator------" << endl;
        cout << "1. Add" << endl;
        cout << "2. Min" << endl;
        cout << "3. Mul" << endl;
        cout << "4. Div" << endl;
        cout << "5. ShowCount" << endl;
        cout << "6. Exit" << endl;
    }
    double Add(double a, double b)
    {
        Count[0]++;
        return a + b;
    }
    double Mul(double a, double b)
    {
        Count[1]++;
        return a * b;
    }
    double Min(double a, double b)
    {
        Count[2]++;
        return a - b;
    }
    double Div(double a, double b)
    {
        Count[3]++;
        return a / b;
    }
    void ShowOpCount()
    {
        cout << "Add :" << Count[0] << " Min :" << Count[2] << " Mul:" << Count[1] << " Div:" << Count[3] << endl;
    }
};