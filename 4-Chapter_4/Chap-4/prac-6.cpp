#include <iostream>
using namespace std;

void recip(double &d);

int main()
{
	double x = 100.0;

	cout << " xは " << x << "\n";

	recip(x); 

	cout << " 逆数は " << x << "\n";

	return 0;
}

void recip(double &d)
{
	d = (1/d);
}

