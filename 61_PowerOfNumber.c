// Harshit Yadav
// 2105891
#include<stdio.h>
int main()
{
    int n,x,y,i,prod=1;
    printf("enetr the value of x,n");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        prod=prod*x;
    }
    y=prod;
    printf("The value of y is:%d",y);
}