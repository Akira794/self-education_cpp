#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

#define SIZE 255

class strtype{

	char *p;
	int len;

public:
	
	strtype(); //$B%3%s%9%H%i%/%?(B
	~strtype(); //$B%G%9%H%i%/%?(B
	void set(char *ptr);
	void show();
};

// $BJ8;zNs%*%V%8%'%/%H$r=i4|2=$9$k(B
strtype::strtype(){
	
	p = (char *) malloc(SIZE);
	if(!p){
		cout << "$B%a%b%j3d$jEv$F%(%i!<(B\n";
		exit(1);
	}
	*p = '\0';
	len = 0;
}

//$BJ8;zNs%*%V%8%'%/%H$rGK4~$9$k:]$K%a%b%j$r2rJ|$9$k(B
strtype::~strtype(){
	
	cout << "p $B$r2rJ|$9$k(B\n";
	free(p);
}

void strtype::set(char *ptr){
	
	if(strlen(ptr) >= SIZE){
		cout << "$BJ8;zNs$,Bg$-$9$.$k(B\n";
		return;
	}
	strcpy(p, ptr);
	len = strlen(p);
}

void strtype::show(){
	
	cout << p << " - $BD9$5(B : " << len;
	cout << "\n";

}

int main(){

	strtype s1, s2;

	s1.set("This is a test.");
	s2.set("I like C++.");
	s1.show();
	s2.show();

	return 0;
}

