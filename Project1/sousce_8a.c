#include "Header.h"
//반복문
int main()
{
	for (int i = 1;  i <= 10; i++)
	{
		printf("안녕\n");
	}
	//1.int i+1;최초실행
	//2.i<=10;의조건에따라 작업
	//2 - 1.i <= 10;이만족한다면 아래코드실행

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			printf("ㅇ");
		}
		printf("\n");
			
	}
		/*반복문에 특정제어문작서앛*/

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
			printf("i가3입니다.\n");

		}
		printf("%d\n", i);

	}

   for (int i = 1; i <= 5; i++)
   {
	   if (i == 3)
	   {
		   break;
		   printf("i가 3입니다.\n");

	   }
	   printf("i=%d\n", i);
   }
	  
   return 0;

}