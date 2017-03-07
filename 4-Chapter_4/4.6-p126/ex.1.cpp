//引数を参照呼び出しする関数の典型的な例
//渡された2つの引数の値を交換する値を交換する関数
//２つの整数引数を入れ替えるswapargs関数
#include <iostream>
using namespace std;

void swapargs(int &x, int &y);

int main()
{
	int i, j;
	
	i = 10;
	j = 19;

	cout << "i: " << i << ", ";
	cout << "j: " << j << "\n";

	swapargs(i, j);

	cout << "交換後: ";
	cout << "i : " << i << ", ";
	cout << "j : " << j << "\n";
	
	return 0;
	}

void swapargs(int &x, int &y)
{
	int t;

	t = x;
	x = y;
	y = t;
}

