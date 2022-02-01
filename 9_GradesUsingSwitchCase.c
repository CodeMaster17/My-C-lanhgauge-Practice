#include<stdio.h>
int main()
{
    printf("enter the marks");
    int m;//for inputing marks of student
    scanf("%d", & m);
    switch(m/10)
    {
        case (9):
        printf("excellent");
        break;
        
        case (8):
        printf("very good");
        break;

        case(7):
        printf("good");
    }
    return 0;
}