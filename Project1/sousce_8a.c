#include "Header.h"
//�ݺ���
int main()
{
	for (int i = 1;  i <= 10; i++)
	{
		printf("�ȳ�\n");
	}
	//1.int i+1;���ʽ���
	//2.i<=10;�����ǿ����� �۾�
	//2 - 1.i <= 10;�̸����Ѵٸ� �Ʒ��ڵ����

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			printf("��");
		}
		printf("\n");
			
	}
		/*�ݺ����� Ư������ۼ���*/

	for (int i = 1; i < +100; i++)
	{
		if (i % 2 == 0) 
		{
			printf("%d",i );

		}
	}   for (int i = 1; i <= 5; i++)
	{
		if (i == 3)
		{
			continue;
			printf("i��3�Դϴ�.\n");

		}
		printf("%d\n", i);

	}

   for (int i = 1; i <= 5; i++)
   {
	   if (i == 3)
	   {
		   break;
		   printf("i�� 3�Դϴ�.\n");

	   }
	   printf("i=%d\n", i);
   }
	  
   return 0;

}