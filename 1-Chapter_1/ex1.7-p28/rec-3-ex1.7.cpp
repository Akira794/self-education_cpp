#include <iostream>
#include <cctype>
using namespace std;

char min(char a, char b);
int min(int a, int b);
double min(double a, double b);

int main(){

	cout << "min is :" << min('x' , 'a') << "\n";
	cout << "min is :" << min(10, 20) << "\n";
	cout << "min is :" << min(29.67, 29.672) << "\n";

	return 0;
}
//文字列用のmin
char min(char a, char b){
	return tolower(a) < tolower(b) ? a : b;
}
//整数用のmin
int min(int a, int b){
	return a < b ? a : b;
}

//浮動ryのmin
double min(double a, double b){
	return a < b ? a : b;
}



