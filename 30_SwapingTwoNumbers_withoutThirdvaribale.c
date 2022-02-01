#include<stdio.h>
int main()
{
    printf("Enter the first number \n");
    int a,b;
    scanf("%d",&a);
    printf("Enter the second number \n");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("New no in a is %d \n", a);
    printf("New number in b is %d", b);

}

