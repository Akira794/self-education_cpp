#include <iostream>
using namespace std;

//$B4pK\(B
class area_cl{

public:
	double height;
	double width;
};

//
class rectangle : public area_cl{
public:
	rectangle(double h, double w);
	double area();
};

//
class isosceles : public area_cl{
public:
	isosceles(double h, double w);
	double area();
};

rectangle::rectangle(double h, double w)
{
	height = h;
	width = w;
}

isosceles::isosceles(double h, double w)
{
	height = h;
	width = w;
}

double rectangle::area()
{
	return width * height;
}

double isosceles::area()
{
	return 0.5 * width * height;
}

int main()
{
	rectangle b(10.0, 5.0);
	isosceles i(4.0, 6.0);

	cout << "$B;M3Q7A(B" << b.area() << "\n";
	cout << "$BFsEyJU;03Q7A(B" << i.area() << "\n";

	return 0;
}

