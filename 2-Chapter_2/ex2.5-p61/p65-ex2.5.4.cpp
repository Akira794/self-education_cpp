#include <iostream>
using namespace std;

int main()
{
	union {
		unsigned char bytes[8];
		double value;
	};
	int i;
	value = 859345.324;

//double 値内のバイトを表示する
for(i = 0; i < 8; i++)
	cout << (int) bytes[i] << " ";
	cout << "\n";

return 0;
}


