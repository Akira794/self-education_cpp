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
//-----
	//time_t型の仮引数をオーバーロードする
	date(time_t t);
//-----
	void show(){
		cout << month << "/" << day << "/" << year << "\n";
	}
};

date::date(char *str)
{
	sscanf(str, "%d%*c%d%*c%d", &month, &day, &year);
}

date::date(time_t t)
{
	struct tm *p;

	p = localtime(&t);//時刻を書く要素に変換する
	day = p -> tm_mday;
	month = p-> tm_mon;
	year = p-> tm_year;
}

int main()
{
	//文字を使用してdateオブジェクトを作成する
	date sdate("12/31/99");
	
	//整数を使用してdateオブジェクトを作成する
	date idate(12, 31, 99);

	date tdate(time(NULL));

	sdate.show();
	idate.show();
	tdate.show();

	return 0;
}


