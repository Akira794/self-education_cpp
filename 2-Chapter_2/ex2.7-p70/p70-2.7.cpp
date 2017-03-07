#include <iostream>
using namespace std;

class samp{
	int i, j;

public:
	samp(int a, int b);

/*divisible()をここで定義すると自動的にインライン化される*/
int divisible() { return !(i%j); }
};

samp::samp(int a, int b)
{
	i = a;
	j = b;
}

int main()
{
	samp ob1(10,2), ob2(10,3);

//これは真
if(ob1.divisible()) cout << "10は2で割り切れる \n";

//これは偽
if(ob2.divisible()) cout << "10は3で割り切れる \n";

return 0;

}

