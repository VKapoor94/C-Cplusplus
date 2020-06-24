#include <stdio.h>

int main()
{
  int num1, num2, i, num, digit, sum;

  printf ( "Enter first number: ");
  scanf("%d", &num1);

  printf ( "Enter second number: ");
  scanf ( "%d",&num2);

  for(i = num1; i <= num2; i++)
  {
        sum = 0;
        num = i;

        for(; num > 0; num /= 10)
        {
            digit = num % 10;
            sum = sum + digit * digit * digit;
        }

        if(sum == i)
        {
            printf ( "%d \n",i );
        }
  }

  return 0;
}