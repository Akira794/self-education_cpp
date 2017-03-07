#include <iostream>
using namespace std;

class myclass {
	int num;
public:
	myclass(int x){	num = x; }
	friend int isneg(myclass ob);
};
int isneg(myclass ob)
{
	return (ob.num < 0) ? 1 : 0;
}

int main()
{
	myclass a(-1), b(3);

	cout << isneg(a) << ' ' << isneg(b);
	cout << "\n";

	return 0;
}

