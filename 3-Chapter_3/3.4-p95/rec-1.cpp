#include <iostream>
using namespace std;
//前方宣言
class pr2;

class pr1 {
	int printing;
	// ...
public:
	pr1() {printing = 0;}
	void set_print(int status){ printing = status;}
	//...
	friend int inuse (pr1 o1, pr2 o2);
};

class pr2 {
	int printing;
	//...
public:
	pr2() {printing = 0;}
	void set_print(int status){ printing = status;}
	//...
	friend int inuse (pr1 o1, pr2 o2);
};

int inuse(pr1 o1, pr2 o2)
{
	if(o1.printing || o2.printing) return 1;
	else return 0;
}

int main()
{
	pr1 p1;
	pr2 p2;

	if (!inuse(p1, p2)) cout <<" プリンタはアイドル状態です" <<"\n";
	
	cout << " p1は印字設定中です \n";
	p1.set_print(1);
	if(inuse(p1,p2))
		cout << " プリンタは使用中\n";
	
	cout << "p1を解除する \n";
	p1.set_print(0);
	if(inuse(p1,p2))
		cout << "プリンタはアイドル状態です" << "\n";
	
	cout << "p2に切り替える \n";
	p2.set_print(1);
	if(inuse(p1,p2))
		cout << "プリンタは使用中\n";
	
	return 0;
}


