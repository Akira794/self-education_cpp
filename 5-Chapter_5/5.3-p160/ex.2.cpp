//オーバーロード関数を使用して四角形の面積を計算
#include <iostream>
using namespace std;

//正方形ではない四角形の面積を返す
double rect_area(double length, double width)
{
	return length * width;
}

//正方形の面積を返す
double rect_area(double length)
{
	return length * length;
}

int main()
{
	cout << "10 x 5.8 の長方形の面積 : ";
	cout << rect_area(10.0, 5.8) << "\n";
	cout << "10 x 10の正方形の面積 : ";
	cout << rect_area(10.0, 10.0) << "\n";
	
	return 0;
}

