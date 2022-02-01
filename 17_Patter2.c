/*
        1
      123
     1234
    12345
    */
#include<stdio.h>
int main()
{
    int i=1,j=1;
    for(i=1;i<=5;i++)
    {
        // for printing spaces
        for(j=5;j>i;j--)
        {
            printf(" ");
        }
        // for printing numbers
        
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}