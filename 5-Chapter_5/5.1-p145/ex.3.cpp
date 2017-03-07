//オブジェクト初期化方法の選択
#include <iostream>
#include <cstdio> //sscanf()関数用にインクルードする
using namespace std;

class date {
	int day, month ,year;
public:
	date(char *str);
	date(int m, int d, int y){
		day = d, month = m, year = y;}
	void show(){
		cout << month << "/" << day << "/" << year << "\n";
	}
};

date::date(char *str)
{
	sscanf(str, "%d%*c%d%*c%d", &month, &day, &year);
}

int main()
{
	//文字を使用してdateオブジェクトを作成する
	date sdate("12/31/99");
	
	//整数を使用してdateオブジェクトを作成する
	date idate(12, 31, 99);

	sdate.show();
	idate.show();

	return 0;
}


