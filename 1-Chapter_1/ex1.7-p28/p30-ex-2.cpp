#include <iostream>
using namespace std;

void date(char *date);
void date(int month, int day, int year); //数値の日付

int main(){
	date("8/23/99");
	date(8, 23, 99);
	return 0;
}

//文字列の日付
void date(char *date){
	
	cout << "日付 : " << date << "\n";
}

void date(int month, int day, int year){

	cout << "日付 : " << month << "/" << day << "/" << year << "\n";
}


