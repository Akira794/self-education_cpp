#include <iostream>
using namespace std;

class summation{
	int num;
	long sum; //数値の総計
public:
	void set_sum(int n);
	void show_sum(){
		cout << num << "総計は" << sum << "\n";
	}
};

void summation::set_sum(int n)
{
	int i;
	num = n;
	sum = 0;
	for(i =1; i <= n; i++)
		sum += i;
}

summation make_sum()
{
	int i;
	summation temp;
	cout << "数値を入力 : ";
	cin >> i;

	temp.set_sum(i);
	return temp;
}

int main()
{
	summation s;

	s = make_sum();

	s.show_sum();

	return 0;
}

