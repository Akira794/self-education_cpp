#include <iostream>
using namespace std;

class Add{

	float a, b;
	float sum;

public:
	void Set_A(float);
	void Set_B(float);
	void Set_Calc(void);
	float SUM(void);
};

void Add::Set_A(float x){
	
	a = x;
}

void Add::Set_B(float y){

	b = y;
}

void Add::Set_Calc(void){
	
	sum = a + b;
}

float Add::SUM(void){

	return(sum);


}
int main(void){

	Add c;

	c.Set_A(1000);
	c.Set_B(2000);
	c.Set_Calc();

	cout << "Sum = " << c.SUM() << endl;
	
//	getchar();
	return 0;
}

