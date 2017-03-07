#include <iostream>
using namespace std;

class myclass {
	int x;
public:
	//myclassクラスのコンストラクタをオーバーロードする代わりに、デフォルト引数を使用する
	myclass(int n = 0){ x = n;}
	int getx() { return x; }
};

int main()
{
	myclass o1(10); //初期値を指定して宣言する
	myclass o2; //初期値を指定せずに宣言する

	cout << "o1: " << o1.getx() << "\n";
	cout << "o2: " << o2.getx() << "\n";

	return 0;
}

