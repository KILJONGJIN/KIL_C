#include "header.h"
//#include사용법
//c언어기본 시작 전 초기필수조건
//프로젝트파일단위로작업할겨우 main은1개만사요가능
#define POINT 100
#define PIE 3.141592

int main()
{

#if POINT ==100
	printf("포인트가최대치 %d입니다,", POINT);
 #elif POINT <100
 printf("현재포인트는%d입니다,", POINT);
#endif

	float length = 0.0;
	int redius = 2;
	length = 2 * PIE * redius; 

#ifdef PIE
#define ROUND  2*PIE*redius
#endif
	length = ROUND;
	printf("원의둘례:%.3f",length);
 	
 return 0;
}


