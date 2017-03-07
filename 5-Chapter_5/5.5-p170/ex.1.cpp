//オーバーロード関数に関数ポインタを使用する例
#include <iostream>
using namespace std;

//count個の空白を出力する
void space(int count)
{
	for( ; count; count--) cout << ' ';
}

//count個のchを出力する
void space(int count, char ch)
{

	for( ; count; count--) cout << ch;
}

int main()
{
	//1つの整数仮引数を受け取るvoid関数けのポインタを作成する
	void (*fp1)(int);

	//1つの整数仮引数と1つの文字仮引数を受け取るvoid関数へのポインタを作成する
	void (*fp2)(int, char);

	fp1 = space; //space(int)関数のアドレスを取得する
	fp2 = space; //space(int, char)関数のアドレスを取得する

	fp1(22); //22個の空白を出力する
	cout << "|\n";
	fp2(30, 'x'); //30個のxを出力する
	cout << "|\n";
	fp1(45);
	cout << "|\n";

	return 0;
}

