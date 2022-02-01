#include<stdio.h>

// function prototype
int fib(int);

// main function
int main()
{
    printf("this is a program to calculate fibonacci series\n");
    // a program to print fibonacci series
    // fibonacii series is sum of previous two elements whose first two elements are 1,1
    printf("enter the nth term:");
    int num;
    
    // taking input from the user
    scanf("%d",&num);
    printf("The fibonacci series is %d",fib(num));
}

// an user defined function
 int fib(int num )
 {
    //  logic ffor fibonacci series using recurssion

    // variable in the calling function is same as variable of called function
   if(num==1 || num==2)
   {
       return 1;
   }
   else
   return fib(num-1)+fib(num-2);
 }