#include <iostream>
using namespace std;

class myclass{
	int a;
public:
	myclass(int x);//$B%3%s%9%H%i%/%?(B
	int get();
};

myclass::myclass(int x)
{
	a = x;
}

int myclass::get()
{
	return 0;
}

int main()
{
	myclass ob(120);// $B%*%V%8%'%/%H$r:n@.(B
	myclass *p;//$B%*%V%8%'%/%H$X$N%]%$%s%?$r:n@.$9$k(B
	
	p = &ob; //ob$B$N%"%I%l%9$r(Bp$B$K3JG<$9$k(B

	cout << "$B%*%V%8%'%/%H$r;H$C$?CM(B : " << ob.get();
	cout << "\n";
	cout << "$B%]%$%s%?$r;H$C$?CM(B : " << p->get();
	cout << "\n";

	return 0;
}

