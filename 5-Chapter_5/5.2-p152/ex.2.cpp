//���̃v���O�����ł̓R�s�[�R���X�g���N�^���g�p����strtype�I�u�W�F�N�g�Ɋ֐���n��
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class strtype {
	char *p;

public:
	strtype(char *s);	//�R���X�g���N�^
	strtype(const strtype &o);//�R�s�[�R���X�g���N�^
	strtype(){delete [] p;}//�f�X�g���N�^
	char *get(){ return p; }
};

//�ʏ�R���X�g���N�^
strtype::strtype(char *s)
{
	int l;

	l = strlen(s) + 1;

	p = new char [l];
	if(!p){
		cout << "���������蓖�ăG���[" << "\n";
		exit(1);
	}
	
	strcpy(p , s);
}

//�R�s�[�R���X�g���N�^
strtype::strtype(const strtype &o)
{
	int l;

	l = strlen(o.p)+1;
	
	p = new char [l]; //�V�����R�s�[�I�u�W�F�N�g�Ƀ����������蓖�Ă�
	if(!p){
		cout <<"���������蓖�ăG���[" << "\n";
		exit(1);
	}
	strcpy(p, o.p);//��������R�s�[�I�u�W�F�N�g�ɃR�s�[����
}

void show(strtype x)
{
	char *s;

	s = x.get();
	cout << s << "\n";
}

int main()
{
	strtype a("HELLO"), b("There");

	show(a);
	show(b);

	return 0;
}

	
