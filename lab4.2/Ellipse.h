#pragma once
#include "Curves.h"
class Ellipse :
    public Curves
{
    int a, b;
    double x;
public:
    Ellipse(void);
    Ellipse(int a, int b, double x);
    ~Ellipse();
    virtual double y();
};

