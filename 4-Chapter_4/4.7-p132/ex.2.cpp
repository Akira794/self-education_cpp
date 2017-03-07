//オブジェクト参照の引き渡し
//オブジェクトを参照によって渡す方法の便利さを示す
//f()関数で参照仮引数を使用
#include <iostream>
using namespace std;

class myclass {
	int who;
public:
	myclass(int n){
		who = n;
		cout << "コンストラクタ呼び出し " << who << "\n";
		}
	~myclass(){ cout << "デストラクタ呼び出し " << who << "\n";}
	int id() { return who; }
};

//oを値によって渡す
void f(myclass &o)//演算子を使用してることに注意
{
	cout << "受け取り " << o.id() << "\n";
}

int main()
{
	myclass x(1);
	f(x);
	return 0;
}


