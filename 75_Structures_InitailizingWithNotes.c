//HARSSHIT YADAV
//2105891
//WAP to show how to initialize a structure
#include<stdio.h>
#include<string.h>
struct employee
{
    int salary;
    float hike;
    char name[10];
    // ve can also decalare the name of the variable
};//variable name(2nd method) //
int main()
{
    struct employee Harshit={100,71.22,"Harshit"},Harsh;

    // it willset all values to zero
    struct employee Sonu={0};
       strcpy(Harshit.name,"Harshit");
   printf("The name of the employee is %s \n", Harsh.name);
    printf("The salry of the employee is %d \n", Harsh.salary);
    printf("The hike of the employee is %f \n", Harsh.hike); 
    return 0;
}