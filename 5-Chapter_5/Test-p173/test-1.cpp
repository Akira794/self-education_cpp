#include <iostream>

using namespace std;

void order (int &a, int &b)
{
	int t;
	
	if(a<b) return;
	else {	//	aとbを入れ替える
		t = a;
		a = b;
		b = t;
	}
}

int main()
{
	int x = 10, y = 5;
	
	cout << "x" << x << ", y" << y << "\n";
	
	order(x, y);

	cout << "x" << x << ", y" << y << "\n";

	return 0;
}

