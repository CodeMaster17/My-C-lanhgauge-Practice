// Sum of first n natural numbers
// 1+2 +3+4+5 .....+(n-1)+n
// (n-1) + n
#include<stdio.h>
int sum(int);
int main()
{
    int n,result;
    printf("Enter the number of terms");
    scanf("%d",&n);
    result=sum(n);
    printf("The sum of first %d natural nos is %d" ,n,result);

}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else{
        return sum(n-1)+  n;
    }
}

