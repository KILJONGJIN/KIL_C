#include "Header.h"
int main() 
{
	int score;
	printf("0~100 입력");

	scanf("%d",&score);

	if (score >= 60)
	{
		if (score <= 100)
		{
			printf("합격\n");
		}
		else
		{
			printf("불합격\n");
		}
	}
	else
		{
			printf("불합격\n");
		}
		return 0;
}