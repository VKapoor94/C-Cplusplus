//Calculate gross salary
//da=50% dearness allowance
//hra=40% house rent allowance

#include<stdio.h>
#include<conio.h>

void main()
{
   int basic;
   float gross,da, ta;

   printf("Enter Basic Salary : ");
   scanf("%d", &basic);

   da = 0.5 * basic;
   ta = 0.4 * basic;

   gross = basic + da + ta;

   printf("\n Your Gross Salary is : %.2f",gross);

}
