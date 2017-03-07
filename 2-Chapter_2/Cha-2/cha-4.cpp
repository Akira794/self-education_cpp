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
	rectangle(double h, double w){ height = h; width = w;}
	double area(){ return width * height; }
};

//
class isosceles : public area_cl{
public:
	isosceles(double h, double w){ height = h; width = w;}
	double area(){ return 0.5 * width * height; }

};

class cylinder : public area_cl{
public:
	cylinder(double h, double w){ height = h; width = w;}
	double area(){ return (2 * 3.1416 *( width / 2 ) * (width / 2) * (3.1416 * width * height )); }
};


int main()
{
	rectangle b(10.0, 5.0);
	isosceles i(4.0, 6.0);
	cylinder c(3.0, 4.0);

	cout << "四角形" << b.area() << "\n";
	cout << "二等辺三角形" << i.area() << "\n";
	cout << "シリンダ" << c.area() << "\n";

	return 0;
}

