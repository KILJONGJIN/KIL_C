#include"Header.h"
//if ��
//T; ������ġ
//F;���Ǻ���ġ
//if (c)
//{
//�����̽���ɰ��
int main()
{
	int time = 20;
	//�̰����08:00~18:00 �
	//��ϰ�������"open"�ƴҰ�� "close"���
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