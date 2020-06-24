//Biggest of 3 number using ternary operator

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,result;
    printf("Enter 3 numbers");
    scanf("%d %d %d",&a,&b,&c);
  result=(a>b?(a>c?a:c):(b>c?b:c));
  printf("Biggest no is %d",result);
    return 0;
}
