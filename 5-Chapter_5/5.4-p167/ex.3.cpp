#include <iostream>
//#include <cstring>
//#include <cstdlib>
using namespace std;

int f(int a, int b)
{
	return a+b;
}
//本質的にあいまいな関数
int f(int am int &b)
{
	return a-b;
}

int main()
{
	int x = 1, y = 2;
	cout << f(x, y); //どちらのf()関数を呼び出せば良い？

	return 0;
}

