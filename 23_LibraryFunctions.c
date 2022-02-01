#include<stdio.h>
#include<math.h>
int userdefine();

int main()
{
    int a;
    // storing value returned from the userdefine function
   a= userdefine();
//    the return value of pow function is double
    printf("The area of the square is %f", pow(a,2));
}
int userdefine()
{
    int r;
    // to store value of number enterd by the user
    printf("Enetr the value of radius:");
    scanf("%d",&r);
    return r;

}