#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

#define SIZE 255

class strtype{

	char *p;
	int len;

public:
	
	strtype(); //コンストラクタ
	~strtype(); //デストラクタ
	void set(char *ptr);
	void show();
};

// 文字列オブジェクトを初期化する
strtype::strtype(){
	
	p = (char *) malloc(SIZE);
	if(!p){
		cout << "メモリ割り当てエラー\n";
		exit(1);
	}
	*p = '\0';
	len = 0;
}

//文字列オブジェクトを破棄する際にメモリを解放する
strtype::~strtype(){
	
	cout << "p を解放する\n";
	free(p);
}

void strtype::set(char *ptr){
	
	if(strlen(ptr) >= SIZE){
		cout << "文字列が大きすぎる\n";
		return;
	}
	strcpy(p, ptr);
	len = strlen(p);
}

void strtype::show(){
	
	cout << p << " - 長さ : " << len;
	cout << "\n";

}

int main(){

	strtype s1, s2;

	s1.set("This is a test.");
	s2.set("I like C++.");
	s1.show();
	s2.show();

	return 0;
}

