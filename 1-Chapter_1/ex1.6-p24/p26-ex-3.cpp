#include <iostream>
using namespace std;

int main(){
	int i;//ローカル変数をブロックの先頭で宣言する

	cout << "数字を入力 :";
	cin >> i;

	//階乗を計算
	int j, fact = 1; //アクション文の後に変数を宣言
	
	for(j = i; j >= 1; j--) fact = fact * j;
	cout << "階乗は" << fact << "\n";

	return 0;
}


