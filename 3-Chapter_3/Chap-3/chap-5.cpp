#include <iostream>
using namespace std;

#define SIZE 27

//文字を保存するstackクラスを宣言する
class stack{
	char stck[SIZE]; //スタック領域を確保する
	int tos; //スタック先頭の索引

public:
	void init();	//スタックを初期化する
	void push(char ch);	//スタックに文字をプッシュする
	char pop();	//スタックから文字をポップする
};
//スタックを初期化する
void stack::init(){
	cout << "スタックを生成する \n";
	tos = 0;
}

//文字をプッシュする
void stack::push(char ch){
	
	if(tos == SIZE) {
		cout << "スタックは一杯です";
		return;
	}
	stck[tos] = ch;
	tos++;
}

//文字をポップする
char stack::pop()
{
	if(tos == 0){
		cout << "スタックは空です";
		return 0 ;//スタックが空の場合はヌルを返す
	} 
	tos--;
	return stck[tos];
}

void showstack(stack o);
stack loadstack();

int main(){
	stack s1;

	s1 = loadstack();
	showstack(s1);

	return 0;
}

void showstack(stack o)
{
	char c;

	//この文が終了すると oスタックは空になる
	while(c = o.pop()) cout << c << "\n";
	cout << "\n";
}

stack loadstack()
{
	stack t;
	char c;
	for(c = 'a'; c <= 'z'; c++) t.push(c);
	return t;
}

