#include<stdio.h>
int main()
{
    printf("enter the marks");
    int m;//for inputing marks of student
    scanf("%c", &m);
    switch(m)
    {
        case ('A'):
        printf("excellent");
        break;
        
        case ('B'):
        printf("well done");
        break;

        case('C'):{
        printf("you are passed");
        break;
        }

        case 'D':
        {
            printf("you are passed");
            break;
        }
        default:
        printf("invalid grade");

    }
    printf("Your grade is %c",m);
    return 0;
}