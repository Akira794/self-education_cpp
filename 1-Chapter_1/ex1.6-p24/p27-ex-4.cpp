#include <iostream>
using namespace std;

int input(){
	int a;
	cin >> a;
	return a;
	}

void Ans(){
	
	bool outcome;
	
	if(input() == 1) outcome = false;
	else outcome = true;

	if(outcome) cout << "true\n";
	else cout << "false\n";

}

void run(){

	Ans();
}

int main(){
	
	run();
	return 0;
}

