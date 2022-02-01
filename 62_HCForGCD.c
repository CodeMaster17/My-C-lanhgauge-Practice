// Harshit Yadav
// 
// Pythagoras rule of finding gcd
#include<stdio.h>
int main()
{
    int a_91 , b_91;
    printf("Enter the two numbers");
    scanf("%d%d", &a_91, &b_91);
    while(a_91 != b_91)
    {
        if(a_91>b_91)
        {
            a_91=a_91-b_91;
        }
        else{
            b_91=b_91-a_91;
        }
    }
    printf("the hcf of the two entered numbers is:%d",b_91);
}