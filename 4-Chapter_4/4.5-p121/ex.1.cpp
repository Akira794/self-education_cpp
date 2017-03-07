//動的変数を初期化する例
#include <iostream>
using namespace std;

int main()
{
	int *p;

	p = new int(9); //初期値として9を代入する

	if(!p){
		cout << "メモリ割り当てエラー\n";
	return 1;
	}

	cout << "pが指している整数値は : " << *p << "\n";
	
	delete p;

	return 0;

}

