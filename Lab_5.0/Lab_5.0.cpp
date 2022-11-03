#include <iostream>
#include <cmath>

using namespace std;

int h(double x, double y) {
	return (x * x + sin(x * y) + y * y) / 1.0 * (1 + x * x + y * y);
}

int main()
{
	double s, t, c;

	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	c = h(s, t * t) + h(t, 1 + s * s) * h(t, 1 + s + s) / (1.0 * (1 + h(s * t, 1)));

	cout << c;
}