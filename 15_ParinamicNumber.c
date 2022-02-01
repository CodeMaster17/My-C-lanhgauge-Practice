// This is a programo check for parinamic numbers 
// A parinamic number is a number which is multiple of two consecutive numbers eg:12

#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number for checking \t");
    scanf("%d",&num);
    int i=0;
    while(i<=num)
    {   
        if(i*(i+1)==num)
        {
            printf("The number is parinamic number \n");
            printf("The numbers are %d and %d",i,i+1);
            break;
        }
        else if((i*(i+1)!=num)&&(i==num))
        {
            printf("the number is not a parinamic number \n");
        }
        i++;
    }
    
}