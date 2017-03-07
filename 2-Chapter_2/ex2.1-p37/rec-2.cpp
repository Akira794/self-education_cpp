#include <iostream>
#include <ctime>
using namespace std;

class stopwatch{

	double begin, end;

public:
	
	stopwatch();
	~stopwatch();
	void start();
	void stop();
	void show();

};

stopwatch::stopwatch(){

	begin = 0;
	end = 0;
}

stopwatch::~stopwatch(){
	
	cout << "オブジェクトは破壊された \n";

}

void stopwatch::start(){

	begin = (double) clock() / CLOCKS_PER_SEC;

}

void stopwatch::stop(){
	
	end = (double) clock() / CLOCKS_PER_SEC;

}

void stopwatch::show(){

	cout << "経過時間 : " << end - begin;
	cout << "\n";

}

int main(){

	stopwatch watch;
	long i;

	watch.start();
	for(i = 0; i < 320000000; i++); //forループの時間を計測する
	watch.stop();

	watch.show();

	return 0;

}


