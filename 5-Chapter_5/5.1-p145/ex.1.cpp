//コンストラクタ関数のオーバーロード オブジェクトを初期化するかしないかを選択できる
#include <iostream>
using namespace std;

class myclass {
	int x;
public:
	//コンストラクタを2通りにオーバーロードする
myclass() { x = 0; }
myclass(int n){ x = n;}
int getx() { return x; }
};

int main()
{
	myclass o1(10); //初期値を指定して宣言する
	myclass o2;

	cout << "o1:" << o1.getx() << "\n";
	cout << "o2:" << o2.getx() << "\n";

	return 0;
}
 
