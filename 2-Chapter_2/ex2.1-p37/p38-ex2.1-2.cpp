#include <iostream>
using namespace std;

class myclass{
	
	int a;

public:
	myclass(); //���󥹥ȥ饯��
	~myclass(); //�ǥ��ȥ饯��
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

