//独立参照と制限
#include <iostream>
using namespace std;
int main()
{
	int x;
	int &ref = x; //独立参照

	x = 10; //この2つの文も機能は同等である
	ref = 10;

	ref = 100;
	// 100を2回出力する

	cout << x << ' ' << ref << "\n";

	return 0;
}

