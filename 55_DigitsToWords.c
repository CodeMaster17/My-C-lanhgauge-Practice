// Harshit Yadav
// 2105891
#include<stdio.h>
int main()
{
    int n_91,rev=0,rem,d,prod=10,n1,c=0;
    printf("ennter the number");
    scanf("%d",&n_91);
    n1=n_91;
    while(n_91>0)
    {
        rem=n_91%10;
        rev= rev*10+ rem;
        n_91/=10;
    }
    while(rev>0)
    {
        d=rev%10;
        
        switch(d)
        {
            case 0:
            {
                printf("zero");
                break;
            }
            case 1:
            {
                printf("One");
                break;
            }
            case 2:
            {
                printf("Two");
                break;
            }
            case 3:
            {
                printf("Three");
                break;
            }
            case 4:
            {
                printf("Four");
                break;
            }
            case 5:
            {
                printf("Five");
                break;
            }
            case 6:
            {
                printf("Six");
                break;
            }
            case 7:
            {
                printf("seven");
                break;
            }
            case 8:
            {
                printf("eigth");
                break;
            }
            case 9:
            {
                printf("nine");
            }
        }
        rev=rev/10;
    }
    if(n1%10==0)
    {
      while(n1%10==0)
      {
          c++;
          n1/=10;
      }
      for(int i=1;i<=c;i++)
      {
          printf("zero");
      }
    }
    
}