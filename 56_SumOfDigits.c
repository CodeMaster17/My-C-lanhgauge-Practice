// Harshit yaDAV
// 2105891
#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("Enter the number to find sum of digits:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum= sum + rem;
        n/=10;
    }
    printf("the sum of digits is:%d",sum);
}