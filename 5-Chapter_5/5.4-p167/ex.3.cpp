#include <iostream>
//#include <cstring>
//#include <cstdlib>
using namespace std;

int f(int a, int b)
{
	return a+b;
}
//$BK\<AE*$K$"$$$^$$$J4X?t(B
int f(int am int &b)
{
	return a-b;
}

int main()
{
	int x = 1, y = 2;
	cout << f(x, y); //$B$I$A$i$N(Bf()$B4X?t$r8F$S=P$;$PNI$$!)(B

	return 0;
}

