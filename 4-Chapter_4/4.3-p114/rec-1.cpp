#include <iostream>
using namespace std;

class myclass {
	int a, b;
public:
	myclass(int n, int m) {this-> a = n; this-> b = m;}
	int add() {return this->a + this->b; }
	void show();
};

void myclass::show()
{
	int t;

	t = this-> add(); //メンバ関数を呼び出す
	cout << t << "\n";
}

int main()
{
	myclass ob(10, 14);
	ob.show();
	return 0;
}
