//$B%*!<%P!<%m!<%I4X?t$K4X?t%]%$%s%?$r;HMQ$9$kNc(B
#include <iostream>
using namespace std;

//count$B8D$N6uGr$r=PNO$9$k(B
void space(int count)
{
	for( ; count; count--) cout << ' ';
}

//count$B8D$N(Bch$B$r=PNO$9$k(B
void space(int count, char ch)
{

	for( ; count; count--) cout << ch;
}

int main()
{
	//1$B$D$N@0?t2>0z?t$r<u$1<h$k(Bvoid$B4X?t$1$N%]%$%s%?$r:n@.$9$k(B
	void (*fp1)(int);

	//1$B$D$N@0?t2>0z?t$H(B1$B$D$NJ8;z2>0z?t$r<u$1<h$k(Bvoid$B4X?t$X$N%]%$%s%?$r:n@.$9$k(B
	void (*fp2)(int, char);

	fp1 = space; //space(int)$B4X?t$N%"%I%l%9$r<hF@$9$k(B
	fp2 = space; //space(int, char)$B4X?t$N%"%I%l%9$r<hF@$9$k(B

	fp1(22); //22$B8D$N6uGr$r=PNO$9$k(B
	cout << "|\n";
	fp2(30, 'x'); //30$B8D$N(Bx$B$r=PNO$9$k(B
	cout << "|\n";
	fp1(45);
	cout << "|\n";

	return 0;
}

