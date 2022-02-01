// Harshit Yadav
// 2105891
/*

   1
  2 3
 4 5 6
7 8 9 10
   */
#include<stdio.h>
int main()
{
    int i_91,j_91,k_91=1,m_91,n_91=3,c_91=1;
    for(i_91=1;i_91<=4;i_91++)
    {
        for(j_91=1;j_91<=n_91;j_91++)
        {
            printf(" ");
        }
        while(c_91<=i_91)
        {
            printf("%d ",k_91);
            k_91++;
            c_91++;
        }
 
        printf("\n");
        n_91--;
        c_91=1;
    }
}