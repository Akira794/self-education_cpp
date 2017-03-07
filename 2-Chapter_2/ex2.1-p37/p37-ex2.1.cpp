#include <iostream>
using namespace std;

class myclass{
	
	int a;

public:
	myclass(); //コンストラクタ
	void show();
};

myclass::myclass(){

	cout << "コンストラクタ呼び出 \n";
	a = 10;
}

void myclass::show(){
	
	cout << a << "\n";
}

int main(){

	myclass ob;

	ob.show();

	return 0;
}

