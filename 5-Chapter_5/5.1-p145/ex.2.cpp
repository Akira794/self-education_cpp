#include <iostream>
using namespace std;

class myclass {
	int x;
public:
	//コンストラクタを2通りにオーバーロードする
myclass() { x = 0; } //初期化値を指定しない
myclass(int n){ x = n;} //初期化値を指定する
int getx() {return x; } 
};

int main()
{
	//初期値を設定せずに宣言する
	myclass o1[10];
	
	//初期値を設定して宣言する
	myclass o2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int i;

	for(i = 0; i < 10; i++){ 
		cout << "o1[" << i << "]: " << o1[i].getx();
		cout << "\n";
		cout << "o2[" << i << "]: " << o2[i].getx();
		cout << "\n";
	}

	return 0;
}

