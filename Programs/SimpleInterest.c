//Calculate SI
//SI=P*N*R/100
#include <stdio.h>
#include <stdlib.h>

int main()
{
   float p,n,r,si;
   printf("Enter Principal rate of interest and no of years");
   scanf("%f %f %f",&p,&r,&n);
   si=(p*n*r)/100;
   printf("Simple interest is %f",si);
    return 0;
}
