#include <iostream>

using namespace std;
//これは正しくないのでコンパイルできない
void f1(int a);
void f1(int a, int b);

int main(){

	f1(10);//コンパイラが呼び出すべき関数を判断できない
	f1(10, 20);
	return 0;
}

void f1(int a){
	
	cout << "f1(int a) in \n";
}
void f1(int a, int b){

        cout << "f1(int a, int b) in \n";
}


