#include <iostream>
using namespace std;

#if 0
int main(){
	
	f();//関数のプロトタイプがない
	return 0;
}
# endif
void f(){
	cout << "うまくいかない" << "\n";
}

int main(){
	f();
//	retun 0;
}

