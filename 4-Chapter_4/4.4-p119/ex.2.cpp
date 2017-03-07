#include <iostream>
using namespace std;

class samp {
	int i, j;
public:
	void set_it(int a, int b) {i = a; j = b; }
	int get_product() { return i * j; }
};

int main()
{
	samp *p;

	p = new samp; //オブジェクトを割り当てる
	if(!p) {
		cout << "メモリ割り当てエラー \n";
		return 1;
	}

	p-> set_it(4, 5);
	cout << "積は : " << p->get_product() << "\n";
	delete p; //メモリを解放する
	return 0;
}

