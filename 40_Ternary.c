// Harshit yadav
// 891
// to check largest of two nos in ternary ooperator
#include<stdio.h>
int main()
{
    int a,b,big;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    big=a>b?a:b>a?b:0;
    if(big==0)
    printf("Both numbers are equal");
    
    else
    printf("the larger number is %d", big);
    
}