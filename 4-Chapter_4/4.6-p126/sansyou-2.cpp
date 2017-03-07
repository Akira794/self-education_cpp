//参照仮引数を使用するプログラム
#include <iostream>
using namespace std;

void f(int &n); //参照仮引数を宣言する 変数nをf()関数への仮引数として宣言する

int main()
{
	int i = 0;
	
	f(i);

	cout << "iの新しい値 : " << i << "\n";

	return 0;
}

// f() 関数は参照仮引数を使用する
void f(int &n)
{
	//次の文では*が必要ない
	n = 100; //f() 関数を呼び出すのに使用した引数に100を格納する
}

