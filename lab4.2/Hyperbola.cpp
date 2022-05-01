#include "Hyperbola.h"
#include<cmath>
Hyperbola::Hyperbola(void)
{
}

Hyperbola::Hyperbola(int a, int b, double x)
{
	this->a = a;
	this->b = b;
	this->x = x;
}

Hyperbola::~Hyperbola()
{
}

double Hyperbola::y()
{
	return sqrt(((1 + (x * x) / (a * a))) * (b * b));
}
