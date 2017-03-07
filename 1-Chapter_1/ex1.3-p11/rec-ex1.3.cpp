#include <iostream>

using namespace std;

void pay(){

	int hour;
	int money;

	cout << "労働時間と賃金を入力\n";
	cin >> hour >> money;
	
	cout << "合計賃金";
	cout << hour * money <<" 円"<< "\n";
}

int main(){
	pay();
	return 0;
}


