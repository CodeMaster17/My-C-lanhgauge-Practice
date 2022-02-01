#include<stdio.h>
int main(){
    int a=3,b=5;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of a is %d",a);
    printf("\nthe value of b is %d",b); 
}