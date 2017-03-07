#include <iostream>
using namespace std;

struct Add{

	float a, b;
	float sum;
};

int main(void){

	Add x;
	x.a = 100;
	x.b = 200;

	x.sum = x.a + x.b;
	cout << "sum = " << x.sum << endl;
	
//	getchar();
	return 0;
}

