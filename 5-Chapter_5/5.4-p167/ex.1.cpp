//オーバーロードのあいまいさ
#include <iostream>
using namespace std;

float f(float i)
{
	return i / 2.0;
}

double f(double i)
{
	return i / 3.0;
}

int main()
{
	float x = 10.09;
	double y = 10.09;

	cout << f(x);	//曖昧ではない f(float)を使用
	cout << f(y);	//曖昧ではない f(double)を使用
	cout << f(10);	//曖昧である 10をdouble と floatのどちらにでも変換できる

	return 0;
}

