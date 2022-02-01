// Harshit Yadav
// 2105891
/*
   1
  121
 12321
1234321 */
#include<stdio.h>
int main()
{
    int i_91,j_91,k_91,m_91,n_91=3;
    for(i_91=1;i_91<=4;i_91++)
    {
        for(j_91=1;j_91<=n_91;j_91++)
        {
            printf(" ");
        }
        for(k_91=1;k_91<=i_91;k_91++)
        {
            printf("%d",k_91);
        }
        for(m_91=i_91-1;m_91>=1;m_91--)
        {
            printf("%d",m_91);
        }
        printf("\n");
        n_91--;
    }
}