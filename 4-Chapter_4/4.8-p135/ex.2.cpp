//参照の返し
//参照を返す関数を含むごく簡単なプログラム
#include <iostream>
using namespace std;

int &f();//参照を返す
int x;

int main()
{
	f() = 100; // f()関数によって返される参照に100を代入する
	cout << x << "\n";
	return 0;
}

//int 型の参照を返す
int &f()
{
	int x; //xはローカル変数
	return x; //xへの参照を返す
}

//この場合は、変数xはf()関数に対してローカルなのでf()関数が終了するとスコープから外れる
//つまりf()関数から返される参照は約にたたない
