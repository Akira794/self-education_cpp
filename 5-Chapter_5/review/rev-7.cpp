#include <iostream>
using namespace std;

void mag(long &num, long order);

int main()
{	
	long n = 4;
	long o = 2;

	cout << "4を2桁上げると" ;
	mag(n,o);
	cout << n << "\n";

return 0;
}

void mag(long &num, long order)
{
	for( ; order; order--){ num = num * 10;}

}
//p127~p128を参照
