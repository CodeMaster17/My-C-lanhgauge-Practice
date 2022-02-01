//HARSSHIT YADAV
//2105891
//WAp to comapre to strings
#include<stdio.h>
#include<string.h>
int main()
{
    char x[50],y[]="a programming example";
    strcpy(x,"A programming example");
    if(strcmp(x,"A Programming Example")==0)
    printf("Equal\n");
    else {
    printf("Unequal\n");
    }

    if(strcmp(y,x)){
        printf("equal\n");

    }
    else
    printf("unequal\n");

    return 0;
}