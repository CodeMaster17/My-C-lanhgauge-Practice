// Harshit Yadav
// 2105891
#include<stdio.h>
int main()
{
     int a_91,b_91,hcf_91;
     printf("Enter the number");
     scanf("%d%d",&a_91,&b_91);
     for(int i_91=1;i_91<=a_91;i_91++)
     {
         if((a_91%i_91==0)&&(b_91%i_91==0))
         {
             hcf_91=i_91;
         }
     }
     printf("%d",hcf_91);
}
