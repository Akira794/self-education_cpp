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
	p = (char *) malloc(len + 1); //len$B$G;XDj$5$l$?Bg$-$5$NNN0h$r3NJ]$7$F$=$N@hF,%"%I%l%9$rJV$9(B
	if(!p){
		cout << "$B%a%b%j3d$jEv$F%(%i!<(B \n";
		exit(1);
	}
	strcpy(p, ptr);
}

strtype::~strtype()
{

	cout << "p $B$r2rJ|$9$k(B \n";
	free(p);
	
}

void strtype::show()
{

	cout << p << " - $BD9$5(B : " << len;
	cout << "\n";
}

int main()
{
	strtype s1("This is a test."), s2("I like C++.");
	s1.show();
	s2.show();

	return 0;
}

