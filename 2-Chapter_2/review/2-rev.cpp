
#include <iostream>
#include <cstring>
using namespace std;

class addr{
	char name[80];//名前
	char address[40];//アドレス

public:

	void store(char *n, char *a);
	void display();
};

void addr::store(char *n, char *a){

	strcpy(name, n);
	strcpy(address, a);

}

void addr::display(){

	cout << "user name : " << name << "\n";
	cout << "user address : " << address << "\n";

}

int main(){

	addr user1, user2;

	user1.store("Tanama Taro","Tokyoto Minatoku 98-23");
	user2.store("YOkoda Ziro","YOkohama baytown 10-22");

	user1.display();
	user2.display();
	
	return 0;
}

