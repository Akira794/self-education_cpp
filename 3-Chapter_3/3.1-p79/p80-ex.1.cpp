#include <iostream>
using namespace std;

class myclass{
	int a, b;
public:
	void set(int i, int j){	a = i, b = j;}
	void show(){ cout << a << ' ' << b << "\n";}
};

class yourclass{
	int a, b;
	void set(int i, int j){	a = i, b = j;}
	void show(){cout << a << ' ' << b << "\n";}

int main()
{
	myclass o1;
	yourclass o2;
	o1.set(10,4);

	
	
	o2 = o1;//�G���[�@�I�u�W�F�N�g�̌^�����قȂ�

	oa.show();
	o2.show();

	return 0;
}
