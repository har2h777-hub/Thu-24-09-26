#include<stdio.h>
void main()
{
float price,quantity,total;
int fee=5;

clrscr();
printf("Enter price of one book:");
scanf("%f",&price);
printf("Enter the quantity of books:");

scanf("%f",&quantity);

total=(price*quantity)+fee;
printf("The total price is:%f",total);
getch();
}