#include<stdio.h>
#include<stdlib.h>
#define hamada 20
int main()
{
int x,y=hamada;
printf("Please enter your age: ");
scanf("%d",&x);
printf("Your age is %d\nHamada's age %d\nand the difference between them is %d",x,y,y-x);
return 0;
}