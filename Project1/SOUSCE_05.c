#include "Header.h"
int main() 
{
	int score;
	printf("0~100 �Է�");

	scanf("%d",&score);

	if (score >= 60)
	{
		if (score <= 100)
		{
			printf("�հ�\n");
		}
		else
		{
			printf("���հ�\n");
		}
	}
	else
		{
			printf("���հ�\n");
		}
		return 0;
}