#include <iostream>
using namespace std;

void rneg(int &num);//$B;2>H$r;HMQ(B
void pneg(int *num);//$B%]%$%s%?$r;HMQ(B
int main()
{
int i = 10;
int j = -20;

rneg(i);
pneg(&j);

cout << i << ' ' << j << "\n";

return 0;

}

void rneg(int &num)
{
	num = -num;
}

void pneg(int *num)
{
	*num = -*num;
}

