#include <iostream>
#include <cmath>
using namespace std;

int sroot(int n);
long sroot(long n);
double sroot(double n);

int main(){

        cout << "整数 3の平方根 : " << sroot(3) << "\n\n";
        cout << "長整数 33Lの平方根 : " << sroot(33L) << "\n\n";
        cout << "倍精度浮動小数点数 19.114の平方根 : "<< sroot(19.114) << "\n\n";

        return 0;
}


int sroot(int n){
        cout << "整数用の sroot()\n";
        return (int) sqrt((double) n);
}


long sroot(long n){
        cout << "長整数用の sroot()\n";
        return (long) sqrt((double) n);
}


double sroot(double n){
        cout << "倍精度浮動小数点数用の sroot()\n";
        return sqrt(n);
}

