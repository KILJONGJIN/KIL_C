#include "header.h"
//#include����
//c���⺻ ���� �� �ʱ��ʼ�����
//������Ʈ���ϴ������۾��Ұܿ� main��1������䰡��
#define POINT 100
#define PIE 3.141592

int main()
{

#if POINT ==100
	printf("����Ʈ���ִ�ġ %d�Դϴ�,", POINT);
 #elif POINT <100
 printf("��������Ʈ��%d�Դϴ�,", POINT);
#endif

	float length = 0.0;
	int redius = 2;
	length = 2 * PIE * redius; 

#ifdef PIE
#define ROUND  2*PIE*redius
#endif
	length = ROUND;
	printf("���ǵѷ�:%.3f",length);
 	
 return 0;
}


