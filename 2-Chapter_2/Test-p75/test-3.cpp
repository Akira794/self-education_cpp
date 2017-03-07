#include <iostream>
#include <cstdlib>
using namespace std;

class dice {
	int val;
public:
	void roll();
};

void dice::roll()
{
	val = (rand() % 6) + 1; //１〜6までを生成
	cout << val <<"\n";
}

int main()
{
	dice one, two;

	one.roll();
	two.roll();
	one.roll();
	two.roll();
	one.roll();
	two.roll();
	
	return 0;
}
 

