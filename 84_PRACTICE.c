//HARSSHIT YADAV
//2105891
//
#include<stdio.h>
int count(int num);
int *operations(int a[],int c);
int pos=0,c=0,ar[100];
int main()
{
    int num;
    printf("enter the 10 digit number in the form of array");
    scanf("%d",&num);
    int c=count(num);
    int rem;
    int copy=num;
    int ap[c];
    for(int i=0;i<c;i++)
    {
        rem=num%10;
        ap[i]=rem;
        num/=10;
        
    }
    num=copy;
    int digit=count(c);
    for(int i=digit-1;i>=0;i--){
        rem=num%10;
        ap[i]=rem;

    }
    int *ptr;
    ptr=operations(ap,c);
    for(int i=0;i<pos;i++)
    {
        printf("\n%d",ptr[i]);
    }
    int *result;
     result=operations(ap,c);

    return 0;
}
int *operations(int a[],int c)
{
    // int a[c];
    // int ar[c];
    // int pos=0;
    int rem;
    for(int i=0;i<c;i++)
    {
        rem=a[i];
        if(i==0 || i==c-1)
        {
                ar[pos]=a[i];
        }
        else{
            if(a[i-1]%a[i+1]==a[i])
            {
                ar[pos]=a[i];
                pos++;
            }
            else if(a[i-1]/a[i+1]==a[i])
            {
                ar[pos]=a[i];
                pos++;
            }
            else if(a[i-1]+a[i+1]==a[i])
            {
                ar[pos]=a[i];
                pos++;
            }
            else if(a[i-1]-a[i+1]==a[i])
            {
                ar[pos]=a[i];
                pos++;
            }
            else if(a[i-1]*a[i+1]==a[i])
            {
                ar[pos]=a[i];
                pos++;
            }
        }


    }
    int *ptr;
    ptr=ar;
    return ptr;
}
int count(int num)
{
    // int c=0;
    while(num>0)
    {
        num/=10;
        c++;
    }
    return c;

}