#include <iostream>
using namespace std;

class samp{
	int i, j;

public:
	samp(int a, int b);

/*divisible()$B$r$3$3$GDj5A$9$k$H<+F0E*$K%$%s%i%$%s2=$5$l$k(B*/
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

//$B$3$l$O??(B
if(ob1.divisible()) cout << "10$B$O(B2$B$G3d$j@Z$l$k(B \n";

//$B$3$l$O56(B
if(ob2.divisible()) cout << "10$B$O(B3$B$G3d$j@Z$l$k(B \n";

return 0;

}

