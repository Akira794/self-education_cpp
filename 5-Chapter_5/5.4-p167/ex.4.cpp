#include <iostream>

using namespace std;

int f(int a)
{
	return a * a;
}

int f(int a, int b = 0)
{
	return a*b;
}

int main()
{
	cout << f(10,2);//f(int, int)$B$r8F$S=P$9(B
	cout << f(10); //$B[#Kf(B f(int)$B$H(Bf(int ,int )$B$N$I$A$i$r8F$S$@$;$P$h$$$+(B?

	return 0;
}

