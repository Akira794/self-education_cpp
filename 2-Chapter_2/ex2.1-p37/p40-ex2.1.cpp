#include <iostream>
using namespace std;

#define SIZE 10

//文字を保存するstackクラスを宣言する
class stack{
	char stck[SIZE]; //スタック領域を確保する
	int tos; //スタック先頭の索引

public:
	stack();	//スタックを初期化する
	void push(char ch);	//スタックに文字をプッシュする
	char pop();	//スタックから文字をポップする
};

//スタックを初期化する
stack::stack(){
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

int main(){
	stack s1, s2;
	int i;

	s1.push('a');
	s2.push('x');
	s1.push('b');
	s2.push('y');
	s1.push('c');
	s2.push('z');

	for(i = 0; i < 3; i++) cout << "s1をポップする: " << s1.pop() << "\n";
	for(i = 0; i < 3; i++) cout << "s2をポップする: " << s2.pop() << "\n";

	return 0;

}

