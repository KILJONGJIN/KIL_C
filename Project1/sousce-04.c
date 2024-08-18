#include"Header.h"
//if 문
//T; 조건일치
//F;조건불일치
//if (c)
//{
//조건이실행될경우
int main()
{
	int time = 20;
	//이가계는08:00~18:00 운영
	//운영하고있으면"open"아닐경우 "close"출력
	if (time >= 8)
	{
		if (time <= 18)
		{
		printf("OPEN\n");
		}
		else
		{
		printf("close\n");
		}
	}
	else
	{
		printf("close\n");
	}
	return 0;
}