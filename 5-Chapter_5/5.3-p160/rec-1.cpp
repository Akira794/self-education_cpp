#include <iostream>
#include <cstdlib>

using namespace std;

long mystrtol(const char *s, char **end, int base = 10)
{
	return strtol(s, end, base);
}

int main()
{
	long x;
	char *s1 = "100234";
	char *p;

	x = mystrtol(s1, &p, 16);
	cout << "基数16: " << x << "\n";
	
	x = mystrtol(s1, &p, 10);
	cout << "基数10: " << x << "\n";

	x = mystrtol(s1, &p);
	cout << "デフォルトの基数10: " << x << "\n";

	return 0;

}

