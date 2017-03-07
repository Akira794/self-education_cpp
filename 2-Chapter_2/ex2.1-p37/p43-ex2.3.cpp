#include <iostream>
#include <ctime>
using namespace std;

class timer{

	clock_t start;

public:

	timer(); //コンストラクタ
	~timer();//デストラクタ

};

timer::timer(){

	start = clock();
}

timer::~timer(){

	clock_t  end;
	end = clock();
	cout << "経過時間 : "
		<< (end-start) / CLOCKS_PER_SEC << "\n";
}

int main(){

	timer ob;
	char c;

	//遅延 ...
	cout << "最後が [ENTER] になるように入力 : ";
	cin >> c;
	
	return 0;
}
	
