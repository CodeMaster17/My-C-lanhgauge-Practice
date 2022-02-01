#include<stdio.h>
int main()
{
    printf("Enter the value in degree celsius \t");
    float c,f;
    scanf("%f",&c);
    f=1.8*c + 32; //conversion to farhenheit
    printf("\n");
    printf("Temperature in degree farenheit %f", f); // %f is used to print when answer is rquired in decimals
    printf("Ans in integer format %d",f); //when we use %d, it will give answer 0

}