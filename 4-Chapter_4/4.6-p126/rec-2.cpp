#include <iostream>
using namespace std;

void triple (double &num);

int main()
{
	double d = 7.0;
//	triple(&d);//<==ここが間違い
	triple(d);

	cout << d << "\n";
	return 0;
}

// num値を3倍する
void triple(double &num)
{
	num = 3 * num;
}
