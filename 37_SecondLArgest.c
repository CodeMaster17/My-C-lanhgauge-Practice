// Harshit yadav
// 891
// 5. to find out second largest number
#include<stdio.h>
int main()
{
    printf("Enter the three numbers");
    int a,b,c,m;
    scanf("%d%d%d",&a,&b,&c);
    
    if(a>b)
    {
        if(a<c)
        {
            m=a;
        }
    }
    if(b>c)
    {
        if(b<a)
        {
            m=b;
        }
    }
    if(c>a)
    {
        if(c<b)
        m=c;
    }
    printf("The second minimum number is %d",m);
    return 0;
}