// Harshit yadav
// 891
// to print largest of three numbers

#include<stdio.h>
int main()
{
    int a_91,b_91,c_91,max_91;
    printf("enter the first , second and 3rd number \n");
    scanf("%d%d%d",&a_91,&b_91,&c_91); 
   
    max_91=a_91;
    if(b_91>max_91){
    max_91=b_91;
    }
    if(c_91>max_91)
    {
    max_91=c_91;
    }
   
    printf("the max no is :%d",max_91);
     return 0;
}