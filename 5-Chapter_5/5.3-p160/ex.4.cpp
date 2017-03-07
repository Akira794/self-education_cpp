#include <iostream>
#include <cctype>
using namespace std;

const int ignore = 0;
const int upper = 1;
const int lower = 2;

void print(char *s, int how = -1);

int main()
{
	print("Hello There \n", ignore);
	print("Hello There \n", upper);
	print("Hello There \n");//大文字で表示を続ける
	print("Hello There \n", lower);
	print("That's all \n"); //小文字で表示を続ける

	return 0;
}

/*指定されたケースを使用して文字列を表示する
  指定されていない場合は前回のケースを使用する
*/

void print(char *s, int how)
{
	static int oldcase = ignore;

	//指定されてない場合は前回ケースを使用する
	if(how<0) how = oldcase;
	while(*s){
		switch(how){
			case upper: cout << (char) toupper(*s);
				break;
			case lower: cout << (char) tolower(*s);
				break;
			default: cout << *s;
			}
			s++;
		}
		oldcase = how;
}

