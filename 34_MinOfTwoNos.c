// Harshit yadav
// 891
// to print largest of three numbers
#include<stdio.h>
int main()
{
    int a_91,b_91,c_91,min_91;
    printf("Enter the three numbers");
    scanf("%d%d%d",&a_91,&b_91,&c_91);
    min_91=a_91;
    if(b_91<min_91)
    {
        min_91=b_91;
    }
    if(c_91<min_91)
    {
        min_91=c_91;
    }
    printf("The minmum number is : %d",min_91);
}