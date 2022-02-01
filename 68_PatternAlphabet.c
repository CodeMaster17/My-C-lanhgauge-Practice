// Harshit Yadav
// 2105891_91
/*
A
BC
DEF
GHIJ
*/
#include <stdio.h>
int main()
{
    int i_91=1,c_91='A';
    for(i_91=1;i_91<=5;i_91++)
    {
        
        for(int j_91=1;j_91<=i_91;j_91++)
        {
            printf("%c  ",c_91);
            c_91++;
        }
        printf("\n");
    }
}