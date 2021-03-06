//自動インライン化
#include <iostream>
using namespace std;

#define SIZE 10

//文字を保存するstackクラスを宣言する
class stack{
	char stck[SIZE]; //スタック領域を確保する
	int tos; //スタック先頭の索引

public:
	stack(){ tos = 0;}	//スタックを初期化する

//文字をプッシュする
	void push(char ch){
	
		if(tos == SIZE) {
			cout << "スタックは一杯です";
			return;
		}	
	stck[tos] = ch;
	tos++;
	}	

//文字をポップする
	char pop()
	{
		if(tos == 0){
			cout << "スタックは空です";
		return 0 ;//スタックが空の場合はヌルを返す
		} 
	tos--;
	return stck[tos];
	}
};

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

