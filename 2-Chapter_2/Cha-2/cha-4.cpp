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

	cout << "$B;M3Q7A(B" << b.area() << "\n";
	cout << "$BFsEyJU;03Q7A(B" << i.area() << "\n";
	cout << "$B%7%j%s%@(B" << c.area() << "\n";

	return 0;
}

