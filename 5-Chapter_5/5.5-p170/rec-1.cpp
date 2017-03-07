#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int dif(int a, int b)
{
	return a-b;
}

float dif(float a, float b)
{
	return a-b;
}

int main()
{

	int (*p1)(int,int);

	float (*p2)(float,float);

	p1 = dif;
	p2 = dif;

	cout << p1(30,-90);
	cout << "|\n";

	cout << p2(20.67,10);
	cout << "|\n";
	
	return 0;
}

