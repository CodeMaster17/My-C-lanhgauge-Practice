/* harshit yadav
    891
    WAP to add two times */

#include<stdio.h>
int main(){
    int h,m,s1,h1,m1,s,h2,m2,s2,day;
    printf("enter first hours ,minutes and seconds\n");
    scanf("%d%d%d",&h1,&m1,&s1);
    printf("enter seconds,hour,minutes and seconds\n");
    scanf("%d%d%d%d",&h2,&m2,&s2);
    s=h=m=day=0;
    s=s1+s2;
    if(s>60)
    {
        m=s/60;
        s=s%60;
    }
    m=m+m1+m2;
    if(m>60)
    {
        h=m/60;
        m=m%60;
    }
    h=h1+h+h2;
    if(h>24)
    {
        day=1;
        h=h%24;
    }
    printf("First time=%d:%d:%d:%d",h1,m1,s1);

    printf("\nSecond time=%d:%d:%d",h2,m2,s2);
    printf("\nAdded time=");
    if(day==0)
    printf("%d:%d:%d\n",h,m,s);
    else
    {
        printf("%d day",day);
        printf("%d:%d:%d\n",h,m,s);
    }

}