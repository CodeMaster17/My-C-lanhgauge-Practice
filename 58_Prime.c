// Harshit YAdav
// 2105891
#include<stdio.h>
int main()
{
    int n,c=0,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("The given number is prime number");
    }
    else{
        printf("The given number is not a  prime number");
    }
}