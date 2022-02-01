#include<stdio.h>
int main()
{
    int l;
    int b;
    printf("enter the value of length \n");
    scanf("%d",&l);

    printf("enter the value of breadth \n");
    scanf("%d",&b);

    printf("area of the rectangle %d" ,l*b);

    printf("\nThe perimeter of rectangle is:%d",2*(l+b));
}