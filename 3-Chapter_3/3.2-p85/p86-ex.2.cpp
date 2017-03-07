#include <iostream>
using namespace std;

class samp{
	int i;
public:
	samp(int n){ i = n; }
	void set_i(int n){ i = n;}
	int get_i(){return i;}
};

/* o.iをその2乗に設定する.但しsqr_it()を呼び出す際に使われたオブジェクトには何の影響もない */

void sqr_it(samp o)//ex.2
{
	o.set_i(o.get_i() * o.get_i());//ex.2

	cout << "i のコピー値は " << o.get_i();//ex.2
	cout << "\n";

}

int main()
{
	samp a(10);
	sqr_it(a);//値の呼び出し//ex.2


	cout << "しかし,a.iはmain()で変更されない: ";//ex.2

	cout << a.get_i(); // 表示
	cout << "\n";
	
	return 0;
}

