#include <iostream>
#include <cstring>
using namespace std;

class card{
	
	char title[80]; //本のタイトル
	char author[40];//著者
	int number;//冊数

public:

	void store(char *t, char *name, int num);
	void show();
};

void card::store(char *t, char *name, int num){
	
	strcpy(title, t);
	strcpy(author, name);
	number = num;
}

void card::show(){
	
	cout << "本のタイトル :" << title << "\n";
	cout << "著者 :" << author << "\n";
	cout << "冊数 :" << number << "\n";
}

int main(){

	card book1, book2, book3;

	book1.store("Humanoid Robot", "Kazita", 2);
	book2.store("BOOKON", "Hog",3);
	book3.store("NoGame NoLife", "kamiya", 9);

	book1.show();
	book2.show();
	book3.show();

	return 0;
}

