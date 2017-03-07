#include <iostream>
#include <cctype>
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
stack loadstack(int upper);
int main(){
	stack s1, s2, s3;

	s1 = loadstack();
	showstack(s1);

	//大文字を取得する
	s2 = loadstack(1);
	showstack(s2);

	//小文字を使用する
	s3 = loadstack(0);
	showstack(s3);

	return 0;
}
//	スタックの内容を表示する
void showstack(stack o)
{
	char c;

	//この文が終了すると oスタックは空になる
	while(c = o.pop()) cout << c << "\n";
	cout << "\n";
}
//スタックにアルファベットを格納する
stack loadstack()
{
	stack t;
	char c;
	for(c = 'a'; c <= 'z'; c++) t.push(c);
	return t;
}

/* スタックにアルファベット文字を格納する
upperが1の場合は大文字 1以外の場合は小文字を格納する*/
stack loadstack(int upper)
{
	stack t;
	char c;

	if(upper == 1) c = 'A';
	else c = 'a';

	for(; toupper(c)<= 'Z'; c++) t.push(c);
	return t;
}

