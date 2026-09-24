#include<stdio.h>
void main()
{
int number;
clrscr();
printf("Enter your number:");
scanf("%d",&number);
if(number%2==0)
{
printf("Your number is EVEN");
} else
{
printf("Your number is ODD");
}
getch();
}