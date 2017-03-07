//構造体を利用したstack
#include <iostream>
using namespace std;

#define SIZE 10

struct stack {
	//公開用
	stack();
	void push(char ch);
	char pop();

private:
	char stck[SIZE];
	int tos;
};

stack::stack()
{
	cout << "スタックを生成する\n";
	tos = 0;
}

//文字をプッシュする
void stack::push(char ch)
{
	if(tos == SIZE){
		cout << "スタックは一杯\n";
		return;
	}
	stck[tos] = ch;
	tos++;
}

//文字をポップする
char stack::pop()
{
	if(tos == 0){
		cout << "スタックは空です\n";
		return 0; //スタックが空の場合はヌルを返す
	}
	tos--;
	return stck[tos];
}

int main(){
	//自動的に初期化される2つのスタックを生成する
	stack s1, s2;
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

