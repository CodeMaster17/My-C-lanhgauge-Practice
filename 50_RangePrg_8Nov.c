#include<stdio.h>
int main()
{
    int i,a,b;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    i=a;
    while(i<=b){
        printf("%d\n",i);
        i++;
    }
}