#include <iostream>
using namespace std;

class samp {
	int i , j;
public:
	samp(int a, int b){ i = a; j = b;}
	int get_product(){ return i * j; }
};

int main()
{
	samp *p;

	p = new samp(6,5); //オブジェクトを割り当てて初期化する

	if(!p){
		cout << "メモリ割り当てエラー \n";
		return 1;
	}

	cout << "積は : " << p->get_product() << "\n";

	delete p; //メモリを解放する

	return 0;
}

