#include <iostream>
using namespace std;

class samp {
	int a;
public:
	samp(int n);
	int get_a(){ return a; }
};

samp::samp(int n)
{
	a = n;
}

int main()
{
	samp ob[4] [2] = {
		1,2,
		3,4,
		5,6,
		7,8
	};
	
	int i;

	samp *p;

	p = (samp *) ob;//$B%*%V%8%'%/%H$N%]%$%s%?(B
	
		for(i = 0; i < 4; i++){
			cout << p->get_a() << ' ';
			p++;
			cout << p->get_a() << "\n";
			p++;
	}
	cout << "\n";

	return 0;
}

