#pragma once
#include "Curves.h"
class Line :
    public Curves
{
    int a, b;
    double x;
public:
    Line(void);
    Line(int a, int b, int x);
    ~Line();
    virtual double y();
};

