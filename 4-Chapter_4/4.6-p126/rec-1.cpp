#include <iostream>
using namespace std;

void rneg(int &num);//参照を使用
void pneg(int *num);//ポインタを使用
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

