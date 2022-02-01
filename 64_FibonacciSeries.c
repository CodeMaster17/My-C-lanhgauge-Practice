// Harshit Yadav
// 2105891
#include<stdio.h>
int main()
{
    int t1_91=0,i_91,t2_91=1,n_91,sum_91;
    // i_91 is looping variable
    // sum_91 to store values of sum
        // Printing for input
    printf("Enter the number of terms");
    scanf("%d",&n_91);
    printf("Fibonacci series is:");
    for(i_91=1;i_91<=n_91;i_91++)
    {
        printf("%d , ",t1_91);
        sum_91=t1_91+t2_91;
        t1_91=t2_91;
        t2_91=sum_91;
    }

}