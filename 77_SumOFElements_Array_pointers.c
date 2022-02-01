//HARSSHIT YADAV
//2105891
//WAp to print the sum of eleemnts of the array using pointers
#include<stdio.h>
#include<conio.h>
int main()
{
    int *ptr,size,sum=0;
    // clrscr();
    printf("Entert eh size of the array:");
    scanf("%d",&size);
    int ar[size];
    ptr=ar;
    printf("Entert the elements of the array:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=ar;
    for(int i=0;i<size;i++)
    {
        sum=sum+ *ptr;
        ptr++;
    }
    printf("sum of the elements of the array:%d",sum);


    
    return 0;
}