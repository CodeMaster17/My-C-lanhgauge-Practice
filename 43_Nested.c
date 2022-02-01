// Harshit yadav
// 891
// to print largest of three numbers

#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("enter the first , second and 3rd number \n");
    scanf("%d%d%d",&a,&b,&c); 
   
    max=a;
    if(b>max){
    max=b;
    }
    if(c>max)
    {
    max=c;
    }
    return 0;
    printf("the max no is %d:",max);
}