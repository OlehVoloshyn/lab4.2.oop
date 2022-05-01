#include <iostream>
#include "Line.h"
#include "Curves.h"
#include "Ellipse.h"
#include "Hyperbola.h"
using namespace std;


int main()
{
	Line a(1, 2, 5);
	cout << a.y() << endl;

	Ellipse d(2, 4, 0);
	cout << d.y() << endl;

	Hyperbola f(2, 4, 0);
	cout << f.y() << endl << endl;

	Curves* equation[3] = { new Line(a), new Ellipse(d),new Hyperbola(f) };
	for (int k = 0; k < 3; k++)
		cout << equation[k]->y() << endl;
	return 0;
}