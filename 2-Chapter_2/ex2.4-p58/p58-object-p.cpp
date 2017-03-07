#include <iostream>
using namespace std;

class myclass{
	int a;
public:
	myclass(int x);//コンストラクタ
	int get();
};

myclass::myclass(int x)
{
	a = x;
}

int myclass::get()
{
	return 0;
}

int main()
{
	myclass ob(120);// オブジェクトを作成
	myclass *p;//オブジェクトへのポインタを作成する
	
	p = &ob; //obのアドレスをpに格納する

	cout << "オブジェクトを使った値 : " << ob.get();
	cout << "\n";
	cout << "ポインタを使った値 : " << p->get();
	cout << "\n";

	return 0;
}

