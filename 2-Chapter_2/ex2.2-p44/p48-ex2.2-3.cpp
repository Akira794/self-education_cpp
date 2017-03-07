#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype
{

	char *p;
	int len;

public:
	
	strtype(char *ptr);
	~strtype();
	void show();

};

strtype::strtype(char *ptr)
{

	len = strlen(ptr);
	p = (char *) malloc(len + 1); //lenで指定された大きさの領域を確保してその先頭アドレスを返す
	if(!p){
		cout << "メモリ割り当てエラー \n";
		exit(1);
	}
	strcpy(p, ptr);
}

strtype::~strtype()
{

	cout << "p を解放する \n";
	free(p);
	
}

void strtype::show()
{

	cout << p << " - 長さ : " << len;
	cout << "\n";
}

int main()
{
	strtype s1("This is a test."), s2("I like C++.");
	s1.show();
	s2.show();

	return 0;
}

