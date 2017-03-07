#include <iostream>
using namespace std;

class samp{ {
	int a;
public:
	samp(){ a = 0; }
	samp(int n){ a = n;}
	int get_a(){ return a;}
};

int main()
{
	samp ob(88); //obのaを88に初期化する
	samp obarray[10]; //初期化しない10要素の配列
	
	// ....
}

