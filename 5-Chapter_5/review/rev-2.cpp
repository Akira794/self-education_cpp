#include <iostream>
using namespace std;

int main()
{
	float *f;
	int *i;

	f = new float;
	i = new int;

	if( !f || !i ){
		cout << "メモリ割り当てエラー \n";
	return 1;
	}
	
	*f = 10.101;
	*i = 100;

	cout << *f << ' ' << *i << "\n";
	
	delete f;
	delete i;

	return 0;

}

