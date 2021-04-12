#ifndef POINT_H__
#define POINT_H__

#include <iostream>
using namespace std;

class Point
{
private:
    int xpos, ypos, radi;

public:
    void Init(int x, int y, int r)
    {
        xpos = x;
        ypos = y;
        radi = r;
    }
    void ShowPointInfo() const
    {
        cout << "radius: " << radi << endl;
        cout << "[" << xpos << ", " << ypos << "]" << endl;
    }
};
#endif