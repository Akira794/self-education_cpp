#include <iostream>
#include <cstdlib>
using namespace std;
//> 動的にスタックを割り当てる
//文字用のstackクラスを宣言する
class stack{
	
	char *stck; //スタック領域を確保する
	int tos; //スタック先頭の索引
	int size; //スタックのサイズ

public:
	stack(int s);	//コンストラクタ
	~stack();	//デストラクタ
	void push(char ch);	//スタックに文字をプッシュ
	char pop();	//スタックから文字をポップ
};

//スタックの初期化
stack::stack(int s)
{
	cout << "スタックを生成 \n";
	tos = 0;
	stck = (char *) malloc (s);
	
	if(!stck){
		cout << "メモリー割り当てエラー\n";
		exit(1);
	}
	size = s;
}

stack::~stack()
{
	free(stck);
}

//文字をプッシュする
void stack::push(char ch)
{
	if(tos == size){
		cout << "スタックは一杯です \n";
		return;
	}
	stck[tos] = ch;
	tos++;
}

//文字をポップする
char stack::pop()
{
	if(tos == 0){
		cout << "スタックは空です \n";
		return 0; //スタックが空の場合はヌルを返す
	}
	tos--;
	return stck[tos];
}

int main()
{
	//自動的に初期化される２つのスタックを作成する
	stack s1(10), s2(10);
	int i;
	s1.push('a');
	s2.push('x');
	s1.push('b');
        s2.push('y');
	s1.push('c');
        s2.push('z');

	for(i = 0; i < 3; i++) cout << "s1をポップする : " << s1.pop() << "\n";
	for(i = 0; i < 3; i++) cout << "s2をポップする : " << s2.pop() << "\n";

	return 0;
}

