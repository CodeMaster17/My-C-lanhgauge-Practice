#include<stdio.h>
int main()
{
    printf("Enter the first time in hour minute and seconds \n");
    int h1,m1,s1,h2,m2,s2,h,m,s,temp,day=0;
    scanf("%d",&h1);
    scanf("%d",&m1);
    scanf("%d",&s1);
    printf("Enter the second time in hour minute and seconds\n");
    scanf("%d",&h2);
    scanf("%d",&m2);
    scanf("%d",&s2);
    h=h1+h2;
    m=m1+m2;
    s=s1+s2;
    if(s>60)
    {
        temp=s/60;
        s=s%60;
        m=m+temp;
    }
    if(m>60)
    {
        temp=m/60;
        m=m%60;
        h=h+temp;
    }
    if(h>24)
    {
    h=h/24;
    day++;
    }
    printf("The day is %d\n",day);
    printf("The hour is %d\n",h);
    printf("The minute is %d\n", m);
    printf("The seconds is %d\n",s);
    
}