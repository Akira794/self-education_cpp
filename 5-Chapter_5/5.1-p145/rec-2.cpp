//ストップウォッチエミュレータ
#include <iostream>
#include <ctime>
using namespace std;

class stopwatch {
	double begin, end;
public:
	stopwatch();
	stopwatch(clock_t t);
	~stopwatch();
	void start();
	void stop();
	void show();
};

stopwatch::stopwatch()
{
	begin = end = 0.0;
}

stopwatch::stopwatch(clock_t t)
{
	begin = (double) t / CLOCKS_PER_SEC;
	end = 0.0;
}

stopwatch::~stopwatch()
{
	cout << "オブジェクトは破棄された \n";
}

void stopwatch::start()
{
        begin = (double) clock() / CLOCKS_PER_SEC;
}

void stopwatch::stop()
{
        end = (double) clock() / CLOCKS_PER_SEC;
}

void stopwatch::show()
{
	cout << "経過時間: " << end - begin;
	cout << "\n";
}

int main()
{
	stopwatch watch;
	long i;
	watch.start();
	for(i = 0; i < 320000000; i++); //forループの時間を測定する
	watch.stop();
	watch.show();

	//初期値を使用してオブジェクトを作成する
        stopwatch s2(clock());
        for(i = 0; i < 250000000; i++); //forループの時間を測定する
        watch.stop();
        watch.show();
	
	return 0;
}



