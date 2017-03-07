#include <iostream>
using namespace std;

class truck; //前方宣言
//フレンド関数は2つのことなる型のクラスが共通した特性を持っている時
//それを比較することが挙げられる

class car{
	int passengers;
	int speed;
public:
	car(int p, int s){ passengers = p; speed = s;}
	friend int sp_greater(car c, truck t);
};

class truck{
	int weight;
	int speed;
public:
	truck(int w, int s){ weight = w; speed = s;}
	friend int sp_greater(car c, truck t);
};

/* carの速度がtruckより速い場合は正の値を返す
同じ速度なら0を返す
truckの速度がcarよりも速い場合は負の値を返す
*/
int sp_greater(car c, truck t)
{
	return c.speed - t.speed;
}

int main()
{
	int t;
	car c1(6, 55), c2(2, 120);
	truck t1(10000, 55), t2(20000, 72);

	cout << "c1とt1を比較 :" << "\n";
	t = sp_greater(c1, t1);
	if(t < 0) cout << "トラックが速い" << "\n";
	else if(t == 0) cout << "乗用車とトラックの速度は同じ" << "\n";
	else cout << "乗用車が速い" << " \n";

	cout << "\nc2とt2を比較 :" << "\n";
        t = sp_greater(c2, t2);
        if(t < 0) cout << "トラックが速い" << " \n";
        else if(t == 0) cout << "乗用車とトラックの速度は同じ" << " \n";
        else cout << "乗用車が速い" << " \n";

	return 0;
}

