/*
A
AB
ABC
ABCD
ABCDE
*/
#include <stdio.h>
int main()
{
    int i=1,c='A';
    for(i=1;i<=5;i++)
    {
        c='A';
        for(int j=1;j<=i;j++)
        {
            printf("%c  ",c);
            c++;
        }
        printf("\n");
    }
}