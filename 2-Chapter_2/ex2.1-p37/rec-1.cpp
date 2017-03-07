#include <iostream>
using namespace std;

#define SIZE 100

class q_type{
	
	int queue[SIZE]; //キューを保存する
	int head, tail; //先頭と末尾の索引

public:
	q_type();
	void q(int num); //エンキュー
	int deq(); //デキュー
};

 q_type::q_type(){
	
	cout << "コンストラクタ呼び出し\n";
	head = 0;
	tail = 0;
}
//エンキュー(キューに値を格納する)
void q_type::q(int num){

	if(tail + 1 == head || (tail + 1 == SIZE && !head)){
		cout << "キューは一杯です \n";
		return;
	}
	tail++;
	if(tail == SIZE) tail = 0; //循環する
	queue[tail] = num;
}
//デキュー(キューから値を削除する)
int q_type::deq(){

	if(head == tail){
		cout << "キューは空です\n";
		return 0; //またはその他のエラーインジケータ
	}
	head++;
	if(head == SIZE) head = 0; //循環する
	return queue[head];
}

int main(){

	q_type q1, q2;
	int i;

	for(i = 1; i <= 10; i++){
		q1.q(i);
		q2.q(i);
	}

	for(i = 1; i <= 10; i++){
		cout << "キューから値を削除する (q1) : " << q1.deq() << "\n";
		cout << "キューから値を削除する (q2) : " << q2.deq() << "\n";
	}
	return 0;
	
}

