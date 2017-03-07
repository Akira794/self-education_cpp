#include <iostream>

using namespace std;

class prompt {
	int count;
public:
	prompt(char *s){ cout << s; cin >> count; }
	~prompt();
};

prompt::~prompt(){
	int i, j;
	
	for(i = 0; i < count ; i++ ){
		cout << "@" << "\n";
		for(j = 0; j < 3200000; j++);//delay
	}
}

int main()
{
	prompt ob("数字を入力する :");

	return 0;
}

