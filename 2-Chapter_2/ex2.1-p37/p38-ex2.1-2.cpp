#include <iostream>
using namespace std;

class myclass{
	
	int a;

public:
	myclass(); //コンストラクタ
	~myclass(); //デストラクタ
	void show();
};

myclass::myclass(){

	cout << "up constract \n";
	a = 10;
}

myclass::~myclass(){
	
	cout << "up destract \n";
}

void myclass::show(){
	
	cout << a << "\n";
}

int main(){

	myclass ob;

	ob.show();

	return 0;
}

