#include <stdio.h>
int main()
{
    int a,b;
    double p;
    char op;
        printf("Choose the operation you want to perform: '+','-','*' ");
    scanf("%c",&op);

    printf("enter the two numbers:");
    scanf("%d%d",&a,&b);

    switch (op)
    {
    case '+':
    { /* constant-expression */
        /* code */
        printf("the sum is:%d",a+b);
        break;
    }
    case '-':
    {
        printf("The difference is:%d",a-b);
        break;
    }
    case '*':
    {
        printf("The product is:%d",a*b);
        break;
    }
    case '%':
    {
        
            p=a%b;
            printf("The remainder will be:%f",p);
            break;
        
    }
    default:
    {
        printf("wrong input");
        break;
    }
    }
}