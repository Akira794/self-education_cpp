//対象のクラスの動的配列を割り当てる場合
#include <iostream>
using namespace std;

class myclass {
	int x;
public:
	//コンストラクタを2通りにオーバーロードする
	myclass(){ x = 0; } //初期値を指定しない
	myclass(int n){ x = n; } //初期値を指定する
	int getx(){ return x; } 
	void setx(int n) { x = n; }
};

int main()
{
	myclass *p;
	myclass ob(10); //1つの変数を初期化する

	p = new myclass [10]; //ここでは初期値を使用できない
	if(!p){
		cout << "メモリ割り当てエラー \n";
		return 1;
	}

	int i;

	//全ての要素をobに初期化すりゅ
	for(i = 0; i < 10; i++) p[i] = ob;
	for(i = 0; i < 10; i++) {
		cout << "p[" << i << "]: " << p[i].getx();
		cout << "\n";
	}

	return 0;
}

