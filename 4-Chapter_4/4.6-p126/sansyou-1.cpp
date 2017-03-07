//仮引数としてポインタ(参照ではなく)を使用するプログラム
#include <iostream>
using namespace std;

void f(int *n); //ポインタ仮引数を使用する

int main()
{
	int i = 0;

	f(&i);

	cout << "iの新しい値: " << i << "\n";

	return 0;
}
void f(int *n)
{
	*n = 100; //nが指す引数に100を格納する
};
