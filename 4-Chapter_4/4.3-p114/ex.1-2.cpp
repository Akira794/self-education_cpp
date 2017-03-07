//ポインタの使用例
#include <iostream>
#include <cstring>
using namespace std;

class inventory {
	char item[20];
	double cost;
	int on_hand;
public:
	inventory(char *i, double c, int o)
	{
		strcpy(this-> item, i);//this ポインタを使用してメンバにアクセスする
		this-> cost = c;
		this-> on_hand = o;
	}
	void show();
};

void inventory::show()
{
	cout <<this-> item; //this ポインタを使用してメンバにアクセスする
	cout << ": $ " << this-> cost;
	cout << " 在庫 : " << this-> on_hand << "\n";
}

int main()
{
	inventory ob("レンチ", 4.95, 4);
	ob.show();
	return 0;
}
