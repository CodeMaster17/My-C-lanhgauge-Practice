#include <stdio.h>

// Example of recurssion is factorial of a number

// function prototype
int factorial(int);

// main function
int main()
{
    printf("Enter the number to check factorial:");
    int num;

    // taking input from the user
    scanf("%d", &num);
    
    // calling directly the factorial function
    printf("the factorial of the number is : %d", factorial(num));
}

// user difined factorial function
int factorial(int f)
{
    int fact;
    if (f == 1 || f == 0)
    {
        // A program does not execute anything below return statement
        return 1;
    }
    else
    {

        // logic for calulating factorial
        fact = f * factorial(f - 1);
        return fact;
    }
}