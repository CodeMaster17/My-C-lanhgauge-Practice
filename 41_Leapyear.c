// Harshit yadav
// 891
// to chechk for leap year
#include<stdio.h>
int main()
{
    int a;
    printf("enter the year\n");
    scanf("%d",&a);
    if((a%4==0)&&(a%100!=0)||(a%400==0))
    printf("it is leap year");
    
    else
    printf("It is not a leap year");
}