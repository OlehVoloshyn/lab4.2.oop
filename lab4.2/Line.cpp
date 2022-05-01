#include "Line.h"

Line::Line(void)
{
}

Line::Line(int a, int b, int x)

{
	this->a = a;
	this->b = b;
	this->x = x;

}

Line::~Line()
{
}

double Line::y()
{
	return  a *x + b;
}
