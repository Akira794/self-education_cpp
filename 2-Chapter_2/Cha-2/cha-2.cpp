#include <iostream>
using namespace std;

class line{
	int len;
public:
	line(int l);
};

line::line(int l)
{
	len = l;

	int i;
	for(i = 0; i < len ; i++) cout << '*' ;
	cout << "\n";
}

int main()
{
	line  l(10);

	return 0;
}	
