#include<stdio.h>
int main(){
    int p,r,t;
    printf("enter the principal\t");
    scanf("%d",&p);
    printf("\n enter the rate \t");
    scanf("%d",&r);
    printf("\n Enter the time\t");
    scanf("%d",&t);
    printf("simple interest is= %f",p*r*t*0.01);
    return 0;

    }