/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include<stdio.h>
int main()
{
    int  i=1,j=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            // no of spaces in printf is also taken into consideration
            printf("%d   ",j); 
        }
        printf("\n");
    }
}