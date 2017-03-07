#include <iostream>
using namespace std;

//基本
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

	cout << "四角形" << b.area() << "\n";
	cout << "二等辺三角形" << i.area() << "\n";

	return 0;
}

