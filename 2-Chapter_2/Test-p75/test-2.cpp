#include <iostream>
using namespace std;
//feet to inch src => class化
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
                cout << feet << "フィートは" << inches << "インチです :" << "\n";
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

