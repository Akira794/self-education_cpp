#include <iostream>
using namespace std;

class box{
	double l, w, h;
	double volume;
public:
	box(double a, double b, double c);
	void vol();
};

box::box(double a, double b, double c)
{
	l = a;
	w = b;
	h = c;
	volume = l * w * c;
}

void box::vol()
{
	cout <<"volume: " << volume << "\n";
}

int main()
{
	box x(2.2, 3.97, 8.09), y(1.0, 2.0, 3.0);

	x.vol();
	y.vol();
	return 0;

}

