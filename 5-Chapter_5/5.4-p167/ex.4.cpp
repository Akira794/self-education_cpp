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
	cout << f(10,2);//f(int, int)を呼び出す
	cout << f(10); //曖昧 f(int)とf(int ,int )のどちらを呼びだせばよいか?

	return 0;
}

