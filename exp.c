#include<stdio.h>
int main()
{
double number;
printf("\n Enter a number:");
scanf("%f", &number);
if(number<=0.0)
{
if(number==0.0)
printf("You entered 0.0);
else
{
printf("you entered a negative number.");
}
else
printf("you entered a possitive number.");
return 0;
}
