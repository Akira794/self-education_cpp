#include <iostream>
using namespace std;

void input(){
	int i;
	float f;
	char s[80];

	cout << "input int float char: ";
	cin >> i >> f >> s;
	cout << "inputed value:";
	cout << i << ' ' << f << ' ' << s << "\n";
}

void char_cin(){
	char ch;
	
	cout << "input key. Stop key = x \n";
	do{
		cout << ": ";
		cin >> ch;
	} while(ch != 'x');

} 
void run(){
//	input();
	char_cin();
}

int main(){
	run();
	return 0;
}

