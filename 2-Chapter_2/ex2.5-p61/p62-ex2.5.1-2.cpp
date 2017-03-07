#include <iostream>
#include <cstring>
using namespace std;

class cl_type{
	double balance;
	char name[40];
public:
	cl_type(double b, char *n);
	void show();
};

cl_type::cl_type(double b, char *n)
{
	balance = b;
	strcpy(name, n);
}

void cl_type::show()
{
	cout << "Name : " << name;
	cout << ": $" << balance;
	if(balance < 0.0) cout << "***";
	cout << "\n";
}

int main()
{
	cl_type acc1(100.12, "BJ");
	cl_type acc2(-12.34, "HJ");

	acc1.show();
	acc2.show();

	return 0;
}

