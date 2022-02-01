// Harshit Yadav
// 2105891
/*
1
01
101
0101
*/
#include<stdio.h>
int main()
{
    int i_91,j_91;
    for(i_91=1;i_91<=5;i_91++)
    {
        for(j_91=1;j_91<=i_91;j_91++)
        {
            printf("%d",(i_91+j_91+1)%2);
        }
        printf("\n");
    }
}