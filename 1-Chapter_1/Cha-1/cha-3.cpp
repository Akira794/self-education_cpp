#include <iostream>
using namespace std;

int main(){
	int i, n, result;
	
	cout << "基数を入力 : ";
	cin >> i;
	cout << "ベキ指数を入力 : ";
	cin >> n;
	
	result = 1;

	for( ; n; n--) result = result * i;

	cout << "A. = " << result << "\n";

	return 0;
}	
