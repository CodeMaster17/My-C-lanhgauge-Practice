//HARSSHIT YADAV
//2105891
//WAP to show how to use array in cncept of structures
#include<stdio.h>
#include <string.h>
struct employee
{
    int salary;
    float hike;
    char name[10];
};
int main()
{
    struct employee facebook[10];
    //  this can store data of 10 employees
     strcpy(facebook[0].name,"Harshit");

    printf("Enter the salary of Harshit:");
    scanf("%d", &facebook[0].salary);
    printf("Enter the hike of Harshit:");
    scanf("%f", &facebook[0].hike);

    printf("The name of the employee is %s \n", facebook[0].name);
    printf("The salry of the employee is %d \n",facebook[0].salary);
    printf("The hike of the employee is %f \n", facebook[0].hike);
    return 0;
}