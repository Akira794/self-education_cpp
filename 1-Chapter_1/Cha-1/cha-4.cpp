#include <iostream>
#include <cstring>
using namespace std;
//文字列取得関数をオーバーロードする
void rev_str(char *s); // 文字列をその場で逆順にする
void rev_str(char *in, char *out);// 逆順にした文字列をoutに格納する

int main(){
	
	char s1[80], s2[80];
	
	strcpy(s1, "This is a test");
	
	rev_str(s1, s2);
	cout << s2 << "\n";

	rev_str(s1);
	cout << s1 << "\n";

	return 0;
}

//文字列を逆順にし、結果をsに格納する
void rev_str(char *s){

	char temp[80];
	int i, j;
	
	for(i = strlen(s) - 1, j = 0; i >= 0; i--, j++)
		temp[j] = s[i];

	temp[j] = '\0';//ヌルで終了する結果

	strcpy(s, temp);
}

//文字列を順逆にし、結果をoutに格納する
void rev_str(char *in, char *out){
	
	int i, j;

	for(i = strlen(in) - 1, j = 0; i >= 0; i--, j++)
		out[j] = in[i];

	out[j] = '\0'; //ヌルで終了する結果

}

