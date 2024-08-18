#include "Header.h"
//github연동
//연산자(operator)
//연산자의종류
//1대입 (일반대입)=(복합대입)+=,-=,*=,/=,%=,
//2산술  +,-,*,/,%,
//3관계  >,<,>=,<=,==,!=
//4논리  &&,||,!
//5조건 conditon

int main() {
	int a = 10;
	int b = 7;
	int c; //정수형 변수 선언

	c = a + b;
	printf("% d + % d = % d\n",a,b,c);
	int temp = c;
	c -= b;
	printf("% d - % d = % d\n", a, b, c);
	printf("% d * % d = % d\n",a,b, a*b);
	return 0;

}