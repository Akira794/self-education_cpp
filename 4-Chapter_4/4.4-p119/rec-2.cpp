#include <iostream>
#include <cstring>
using namespace std;

class phone {
	char name[40];
	char number[14];
public:
	void store(char *n, char *num);
	void show();
};

void phone::store(char *n, char *num)
{	
	strcpy(name, n);
	strcpy(number, num);
}

void phone::show()
{
	cout << name << ": " << number;
	cout << "\n";
}

int main()
{
	phone *p;
	
	p = new phone;//オブジェクトを割り当てる
	if(!p){
		cout << "メモリ割り当てエラー\n";
		return 1;
	}
	
	p-> store("Hoshino","679-9987");
	
	p-> show();
	
	delete p;
	
	return 0;
}

