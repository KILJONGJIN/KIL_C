#include "Header.h"
int main() 
{
	int money = 1;
	int total = 0;

for(int day  =1; day<=30; day++)

    {
	total = total + money;
	money =total* 2;
	printf("%d\n", day, total);
    }

printf("�����Է�>>");
     int n,is_prime;

     scanf("%d", &n);
     is_prime = 1;

	for (int i = 1; i <= n; i++)
   {
	if (i == 1 || i == n)

	{
		continue;
	}

   }
if (is_prime == 1)
{
	printf("%d�¼Ҽ�\n", n);

}
else 
{
	printf("%d�¼Ҽ��� �ƴ�\n",n );
}
return 0;
}