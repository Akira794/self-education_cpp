#include <iostream>
using namespace std;

#define SIZE 100

class q_type{
	
	int queue[SIZE]; //$B%-%e!<$rJ]B8$9$k(B
	int head, tail; //$B@hF,$HKvHx$N:w0z(B

public:
	q_type();
	void q(int num); //$B%(%s%-%e!<(B
	int deq(); //$B%G%-%e!<(B
};

 q_type::q_type(){
	
	cout << "$B%3%s%9%H%i%/%?8F$S=P$7(B\n";
	head = 0;
	tail = 0;
}
//$B%(%s%-%e!<(B($B%-%e!<$KCM$r3JG<$9$k(B)
void q_type::q(int num){

	if(tail + 1 == head || (tail + 1 == SIZE && !head)){
		cout << "$B%-%e!<$O0lGU$G$9(B \n";
		return;
	}
	tail++;
	if(tail == SIZE) tail = 0; //$B=[4D$9$k(B
	queue[tail] = num;
}
//$B%G%-%e!<(B($B%-%e!<$+$iCM$r:o=|$9$k(B)
int q_type::deq(){

	if(head == tail){
		cout << "$B%-%e!<$O6u$G$9(B\n";
		return 0; //$B$^$?$O$=$NB>$N%(%i!<%$%s%8%1!<%?(B
	}
	head++;
	if(head == SIZE) head = 0; //$B=[4D$9$k(B
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
		cout << "$B%-%e!<$+$iCM$r:o=|$9$k(B (q1) : " << q1.deq() << "\n";
		cout << "$B%-%e!<$+$iCM$r:o=|$9$k(B (q2) : " << q2.deq() << "\n";
	}
	return 0;
	
}

