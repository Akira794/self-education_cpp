//このプログラムではコピーコンストラクタを使用してstrtypeオブジェクトに関数を渡す
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class strtype {
	char *p;

public:
	strtype(char *s);	//コンストラクタ
	strtype(const strtype &o);//コピーコンストラクタ
	strtype(){delete [] p;}//デストラクタ
	char *get(){ return p; }
};

//通常コンストラクタ
strtype::strtype(char *s)
{
	int l;

	l = strlen(s) + 1;

	p = new char [l];
	if(!p){
		cout << "メモリ割り当てエラー" << "\n";
		exit(1);
	}
	
	strcpy(p , s);
}

//コピーコンストラクタ
strtype::strtype(const strtype &o)
{
	int l;

	l = strlen(o.p)+1;
	
	p = new char [l]; //新しいコピーオブジェクトにメモリを割り当てる
	if(!p){
		cout <<"メモリ割り当てエラー" << "\n";
		exit(1);
	}
	strcpy(p, o.p);//文字列をコピーオブジェクトにコピーする
}

void show(strtype x)
{
	char *s;

	s = x.get();
	cout << s << "\n";
}

int main()
{
	strtype a("HELLO"), b("There");

	show(a);
	show(b);

	return 0;
}

	
