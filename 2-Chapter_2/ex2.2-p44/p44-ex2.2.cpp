#include <iostream>
using namespace std;

class myclass{
	
	int a;

public:

	myclass(int x); //コンストラクタ
	void show();

};

myclass::myclass(int x){

	cout << "コンストラクタ呼び出し \n";

	a = x;

}

void myclass::show(){

	cout << a << "\n";

}

int main(){

	myclass ob(4);

	ob.show();

	return 0;

}


