//this ポインタの使用
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
		strcpy(item, i);
		cost = c;
		on_hand = o;
	}
	void show();
};

void inventory::show()
{
	cout << item;
	cout << ": $ " << cost;
	cout << " 在庫 : " << on_hand << "\n";
}

int main()
{
	inventory ob("レンチ", 4.95, 4);
	ob.show();
	return 0;
}
