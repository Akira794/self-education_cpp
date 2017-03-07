//オーバーロードのあいまいさ
#include <iostream>
using namespace std;

void f(unsigned char c)
{
	cout << c;
}

void f(char c)
{
	cout << c;
}

int main()
{	
	f('c');
	f(86);//どちらのf()関数を呼び出せばよいのか？
	return 0;
}

