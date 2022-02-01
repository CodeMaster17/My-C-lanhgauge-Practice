#include<stdio.h>
int main()
{
    int m1,m2,m3;
    double p;
    printf("Enter the marks in first subject :");
    scanf("%d", &m1);
    
    printf("Enter the marks in second subject :");
    scanf("%d", &m2);
    
    printf("Enter the marks in third subject :");
    scanf("%d", & m3);
    p=(m1+m2+m3)/3 ;
    if(p>=0.4)
    {
        if((m1>33)&&(m2>33)&&(m3>33))
        printf("student is passed");

        else
        printf("student is failed");
    }
    else
    printf("student is failed");

}