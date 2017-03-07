#include <iostream>
using namespace std;

int rotate(int i);
long rotate(long i);

int main(){
	
	int a;
	long b;
	
	a = 0x8000;
	b = 8;

	cout << rotate(a);
	cout << "\n";
	cout << rotate(b);
	
	return 0;

}

int rotate(int i){
	
	int x;
	if(i & 0x80000000) x = 1;
	else x = 0;

	i = i << 1;
	i += x;

	return i;
}

long rotate(long i){

        long x;
        if(i & 0x80000000) x = 1;
        else x = 0;
	
	i = i << 1;
	i += x;

        return i;
}

