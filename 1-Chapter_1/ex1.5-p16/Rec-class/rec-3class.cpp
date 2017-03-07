#include <iostream>

using namespace std;

class Total{

	long n;
	long sum;
public:
	
	void Set_N(long);
	long Sum(void);
	void Calc(void);
};

void Total::Set_N(long x){
	
	n = x;
}

long Total::Sum(void){
	
	return(sum);
}

void Total::Calc(void){

	sum = 0;
	for(long i = 1; i <= n; i++)
		sum+= i;
}

int main(){
	
	Total ans;

	long n;

	cout << "INput --> "; cin >> n;

	ans.Set_N(n);
	ans.Calc();
	cout << "Sum = " << ans.Sum() << endl;
	
	return 0;
}

