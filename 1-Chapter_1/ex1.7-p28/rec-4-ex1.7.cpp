#include <iostream>
#include <cstdlib>
using namespace std;

//sleepをオーバーロードし,整数またはchar *を引数として受け取る
void sleep(int n);
void sleep(char *n);

//プロセッサの速度に合わせてこの値を変更する
#define DELAY 100000000000

int main(){
	
	cout << '.';
	sleep(3);
	cout << '.';
	sleep("2");
	cout << ".\n";

	return 0;
	}

//整数を受け取るsleep()
void sleep(int n){
	long i;

	for( ; n; n--)
		for(i = 0; i < DELAY; i++);
}

//char *引数を受け取るsleep()
void sleep(char *n){
	long i;
	int j;

	j = atoi(n);

	for( ; j; j--)
		for (i = 0; i < DELAY; i++);
}

