#include "Ellipse.h"
#include <cmath>

Ellipse::Ellipse(void)
{
}

Ellipse::Ellipse(int a, int b, double x)
{
	this->a = a;
	this->b = b;
	this->x = x;
}

Ellipse::~Ellipse()
{
}

double Ellipse::y()
{
	return sqrt((1 - (x * x) / (a * a)) * (b * b));
}
