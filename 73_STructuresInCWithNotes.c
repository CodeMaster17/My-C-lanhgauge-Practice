//HARSSHIT YADAV
//2105891
//WAP to print first prgrm of structures

#include <stdio.h>
#include <string.h>
// method to declare a structure
// a structure can store variables of the all datat types under a single name

// declaring a new user defined datatype as globa area
struct employee
{
    int salary;
    float hike;
    char name[10];
};

// strucutres are stored in continious memory locations
// in array they are stored in continious memory locations
int main()
{
    // -----------------------------For one variable-----------------------------------------
    //  int a = 45;
    //     struct employee Harshit;
    //     // Harshit is the name of the variable
    //     strcpy(Harshit.name,"Harshit");
    //     Harshit.hike=5.3;
    //     Harshit.salary=10000;
    //     printf("The name of the employee is %s \n",Harshit.name);
    //     printf("The salry of the employee is %d \n",Harshit.salary);
    //     printf("The hike of the employee is %f \n",Harshit.hike);

    // -------------------------------Taking inpu and strong------------------------------------
    struct employee Harshit, Virat, Rohit;
    strcpy(Harshit.name,"Harshit");
    printf("Enter the salary of Harshit:");
    scanf("%d", &Harshit.salary);
    printf("Enter the hike of Harshit:");
    scanf("%f", &Harshit.hike);

    strcpy(Harshit.name,"Virat");
    printf("Enter the salary of Virat:");
    scanf("%d", &Virat.salary);
    printf("Enter the hike of Virat:");
    scanf("%f", &Virat.hike);

    strcpy(Harshit.name,"Rohit");
    printf("Enter the salary of Rohit:");
    scanf("%d", &Rohit.salary);
    printf("Enter the hike of Rohit:");
    scanf("%f", &Rohit.hike);

    printf("The name of the employee is %s \n", Harshit.name);
    printf("The salry of the employee is %d \n", Harshit.salary);
    printf("The hike of the employee is %f \n", Harshit.hike);

    printf("The name of the employee is %s \n", Harshit.name);
    printf("The salry of the employee is %d \n", Rohit.salary);
    printf("The hike of the employee is %f \n", Rohit.hike);

    printf("The name of the employee is %s \n", Harshit.name);
    printf("The salry of the employee is %d \n", Virat.salary);
    printf("The hike of the employee is %f \n", Virat.hike);
    return 0;
}