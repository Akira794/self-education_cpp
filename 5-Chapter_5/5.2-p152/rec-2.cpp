#include <iostream>
#include <cstdlib>

using namespace std;

class myclass {
	int *p;
public:
	myclass(int i);
	myclass (const myclass &o);
	~myclass(){ delete p; };
	friend int getval(myclass o);
};

myclass::myclass(int i)
{
	p = new int;

	if(!p){
		cout << "メモリ割り当てエラー \n";
		exit(1);
	}

	*p = i;
}

myclass::myclass(const myclass &o)
{
	p = new int;

	if(!p){
		cout << "メモリ割り当てエラー \n";
		exit(1);
	}
	*p =*o.p;
}

int getval(myclass o)
{
	return *o.p; //値を取得する
}

int main()
{
	myclass a(1), b(2);

	cout << getval(a) << " " << getval(b);
	cout << "\n";
	cout << getval(a) << " " << getval(b);
	cout << "\n";

	return 0;
}

