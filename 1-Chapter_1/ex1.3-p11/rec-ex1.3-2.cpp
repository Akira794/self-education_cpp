#include <iostream>
using namespace std;

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

int main(){
	Convert_feet_to_inches();
	return 0;
}

