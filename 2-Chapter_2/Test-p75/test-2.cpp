#include <iostream>
using namespace std;
//feet to inch src => class$B2=(B
class ftoi {
	double feet;
	double inches;
public:
	ftoi(double f);
};
ftoi::ftoi(double f)
{
                feet = f;
                inches = feet * 12;
                cout << feet << "$B%U%#!<%H$O(B" << inches << "$B%$%s%A$G$9(B :" << "\n";
}
	
#if 0

void Convert_feet_to_inches(){
	int feet;
	
	cout << "Convert feet to inches feet = 0 => Stop";
	do{
		feet = 0;
		cout << "input feet :";
		cin >> feet;
		cout << "inch :" << feet * 12 << "\n";

	}while(feet != 0);
}
# endif 
int main(){
//	Convert_feet_to_inches();
	ftoi ob1(12.0),ob2(99.0);
	return 0;
}

