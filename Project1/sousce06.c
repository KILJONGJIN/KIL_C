#include "Header.h"
int main() {
    //1200���� ���� 6%
    //1200�����ʰ� 4600��������15%
    //4600�����̻� 8800��������24%
    //����6%����
    //������ �ҵ�� ����
    //1.�ҵ� 2.���� 3.����
    //�ҵ�*����

    float income, tax_rate, tax; //����,ǥ�ο����� ���
    printf("�ҵ�����ۼ����ּ���");
    scanf("%f" , &income);
    if (income <= 1200)
    {
        tax_rate = 0.06f;
    }
    else if (income <= 4600)
    {
        tax_rate = 0.15f;
    }
    else if (income <= 8800)
    {
        tax_rate = 0.24f;

    }
    tax = income * tax_rate;
    printf("������ %.0f%%�Դϴ�\n", tax_rate * 100);
    printf("�����ϽǼ����� %.0f(����)�Դϴ�\n", tax);
    return 0;

}