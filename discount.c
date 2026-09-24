#include <stdio.h>
void main();
{
int price = 2000;
int discount = 10;
int amount = price * discount / 100;
clrscr();
printf("Discount amount = %d", amount);
getch();
}