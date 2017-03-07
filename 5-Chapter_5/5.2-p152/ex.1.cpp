//コピーコンストラクタの作成と使用

/*安全な配列クラスを作成する
配列を記憶する領域を動的に割り当てるので
配列オブジェクトを使用してほかの配列オブジェクトを
初期化する前に、コピーコンストラクタを使用して
メモリを割り当てる*/
#include <iostream>
#include <cstdlib>

using namespace std;

class array{

int *p;
int size;
public:
	array(int sz) { //コンストラクタ
	p = new int [sz];
	if(!p) exit(1);
	size = sz;
	cout << "[通常の]コンストラクタを使う\n";
	}
	
	~array() { delete [] p; }

	//コピーコンストラクタ
	array(const array &a);

	void put(int i, int j) {
		if(i >= 0 && i < size) p[i] = j;
	}
	int get(int i){
		return p[i];
	}
};

/* コピーコンストラクタ

このコンストラクタではコピー用にメモリを割り当て、
このメモリのアドレスをpに割り当てる
したがって、pが元のオブジェクトと同じ動的割り当てメモリを
参照することはない
*/

array::array(const array &a){
	int i;

	size = a.size;
	
	p = new int [a.size]; //コピー用のメモリを割り当てる
	if(!p) exit(1);
	for(i = 0; i < a.size; i++) p[i] = a.p[i]; //内容をコピーする
	cout << "コピーコンストラクタを使う\n";
}

int main()
{
	array num(10); //通常のコンストラクタを呼び出す
	int i;

//配列に値を格納する
	for(i = 0; i < 10; i++) num.put(i, i);
	
//numの内容を表示する
	for(i = 9; i >= 0; i--) cout << num.get(i);
		cout << "\n";

//ほかの配列を作成しnumを使用して初期化する
	array x = num;//コピーコンストラクタを呼び出す

//x を表示する
	for(i = 0; i < 10; i++) cout << x.get(i);
	cout << "\n";

	return 0;
}

