//クラス継承の例
#include <iostream>
#include <cstring>
using namespace std;

enum yn {no, yes};
enum color {red, yellow, green, orange};
void out(enum yn x);
char *c[] = { "赤","黄","緑","オレンジ"};

//汎用fruitクラス
class fruit{
	//この基本クラスではすべての要素が公開
public:
	enum yn annual;
	enum yn perennial;
	enum yn tree;
	enum yn tropical;
	enum color clr;
	char name[40];
};

//Apple クラスを派生する
class Apple : public fruit {

	enum yn cooking;
	enum yn crunchy;
	enum yn eating;

public:
	void seta(char *n, enum color c, enum yn ck, enum yn crchy, enum yn e);
	void show();
};

//Orange クラスを派生する
class Orange : public fruit {

        enum yn juice;
        enum yn sour;
        enum yn eating;

public:
        void seto(char *n, enum color c, enum yn j, enum yn sr, enum yn e);
        void show();
};

void Apple::seta(char *n, enum color c, enum yn ck, enum yn crchy, enum yn e)
{
	strcpy(name, n);
	annual = no;
	perennial = yes;
	tree = yes;
	tropical = no;
	clr = c;
	cooking = ck;
	crunchy = crchy;
	eating = e;
}

void Orange::seto(char *n, enum color c, enum yn j, enum yn sr, enum yn e)
{
        strcpy(name, n);
        annual = no;
        perennial = yes;
        tree = yes;
        tropical = yes;
        clr = c;
        juice = j;
        sour = sr;
        eating = e;

}

void Apple::show()
{
	cout << name << " りんご : " << "\n";
	cout << " a : "; out (annual);
        cout << "b :"; out (perennial);
        cout << "c :"; out (tree);
        cout << "d :"; out (tropical);
        cout << "e :" << c[clr] << "\n";
        cout << "f :"; out (cooking);
        cout << "g :"; out (crunchy);
        cout << "h :"; out (eating);
	cout << "\n";
}

void Orange::show()
{
        cout << name << " オレンジ : " << "\n";
        cout << " i : "; out (annual);
        cout << "j :"; out (perennial);
        cout << "k :"; out (tree);
        cout << "l :"; out (tropical);
        cout << "m :" << c[clr] << "\n";
        cout << "n :"; out (juice);
        cout << "o :"; out (sour);
        cout << "p :"; out (eating);
        cout << "\n";
}

void out(enum yn x)
{
	if(x == no) cout << "no\n";
	else cout << "yes\n";
}

int main()
{
	Apple a1, a2;
	Orange o1, o2;

	a1.seta("red del", red, no, yes, yes);
	a2.seta("jonasan", red, yes, no, yes);
	
        o1.seto("ne-bul", orange, no, no, yes);
        o2.seto("barenshia", orange, yes, yes, no);

	a1.show();
	a2.show();

	o1.show();
	o2.show();

	return 0;
}




	
