#include <iostream>

using namespace std;
#if 0
int sum(int a, int b){
	int q;
	q = a + b;
	return q;
}
# endif

int main(){
	int a, b, c;

	cout << "２つの数字を入力 :";
	cin >> a >> b;
	c = sum(a, b);
	cout << "合計 : " << c;

	return 0;
}
#if 1
	//この関数にはプロトタイプが必要である
sum(int a, int b){
	return a+b;
}
# endif


