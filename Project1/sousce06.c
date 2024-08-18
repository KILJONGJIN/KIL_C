#include "Header.h"
int main() {
    //1200만원 이하 6%
    //1200만원초과 4600만원이하15%
    //4600만원이상 8800만원이하24%
    //세율6%기준
    //변수는 소득과 세율
    //1.소득 2.세율 3.세금
    //소득*세율

    float income, tax_rate, tax; //변수,표로여러개 사용
    printf("소득액을작성해주세요");
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
    printf("세율은 %.0f%%입니다\n", tax_rate * 100);
    printf("지불하실세금은 %.0f(만원)입니다\n", tax);
    return 0;

}