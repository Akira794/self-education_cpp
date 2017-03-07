#include <iostream>
using namespace std;

#define SIZE 10

//文字を格納するstackクラスを宣言
class stack{
	char stck[SIZE]; //スタックの領域を確保する
	int tos; //スタックの先頭の索引
public:
	stack();//コンストラクタ
	void push(char ch);//スタックに文字をプッシュする
	char pop();//スタックから文字をポップする
};

//スタックを初期化
stack::stack()
{
	cout << "スタックを生成する \n";
	tos = 0;
}

//文字をプッシュする
void stack::push(char ch)
{
	if(tos == SIZE){
	cout << "スタックは一杯です \n";
	return;
	}
	
	stck[tos] = ch;
	tos ++;
}

//文字をポップする
char stack::pop()
{
	if(tos == 0){
	cout << "スタックは空です \n";
	return 0;
	}
	tos--;
	return stck[tos];
}
/*------------*/
void showstack(stack o);

int main()
{
	stack s1;
	int i;
	
	s1.push('a');
	s1.push('b');
	s1.push('c');

	showstack(s1);
	
//	main()関数内のs1はまだ存在する
	cout << "スタックs1はまだここに存在 \n";
	for(i = 0; i < 3; i++ ) cout << s1.pop() << "\n";

	return 0;
}

//スタックの内容を表示
void showstack(stack o)
{
	char c;
//	この文が終了するとoスタックは空になる
	while (c = o.pop()) cout << c << "\n";

	cout << "\n";
}

