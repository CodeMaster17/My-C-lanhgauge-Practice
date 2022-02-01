/*
1 1
1 2 3
1 2 3 6
1 2 3 4 10
1 2 3 4 5 15
*/
#include <stdio.h>
int main()
{
    int i=1,j=1,sum=0;
    for(i=1;i<=5;i++)
    {
      
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
            sum=sum+j;
        }
        
        printf("%d",sum);
        printf("\n");
        sum=0;
    }
}