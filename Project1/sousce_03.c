#include "Header.h"
//github����
//������(operator)
//������������
//1���� (�Ϲݴ���)=(���մ���)+=,-=,*=,/=,%=,
//2���  +,-,*,/,%,
//3����  >,<,>=,<=,==,!=
//4��  &&,||,!
//5���� conditon

int main() {
	int a = 10;
	int b = 7;
	int c; //������ ���� ����

	c = a + b;
	printf("% d + % d = % d\n",a,b,c);
	int temp = c;
	c -= b;
	printf("% d - % d = % d\n", a, b, c);
	printf("% d * % d = % d\n",a,b, a*b);
	return 0;

}