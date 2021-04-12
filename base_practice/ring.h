#ifndef RING_H__
#define RING_H__

#include "point.h"

class Ring
{
private:
    Point inner, outter;

public:
    void Init(int x1, int y1, int r1, int x2, int y2, int r2)
    {
        inner.Init(x1, y1, r1);
        outter.Init(x2, y2, r2);
    }
    void ShowRingInfo()
    {
        cout << "Inner Circle Info..." << endl;
        inner.ShowPointInfo();
        cout << "Outter Circle Info..." << endl;
        outter.ShowPointInfo();
    }
};
#endif