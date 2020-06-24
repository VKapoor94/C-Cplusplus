//Roots of quadratic equation
//ax2+bx+c
#include <stdio.h>
#include <stdlib.h>

int main()
{
   double a,b,c,discrminant,root1,root2,real,img;
   printf("Enter a b c of quadratic equation");
   scanf("%lf %lf %lf",&a,&b,&c);
   discrminant=b*b-4*a*c;
   if(discrminant>0)
   {
       root1=(-b+sqrt(discrminant))/2*a;
       root2=(-b-sqrt(discrminant))/2*a;
       printf("root 1 %lf root 2 %lf",root1,root2);

   }
   else if(discrminant==0)
   {
       root1=root2=-b/(2*a);
       printf("root 1 %lf",root1);

   }
   else{
    real=-b/(2*a);
    img=sqrt(-discrminant)/(2*a);
    printf("real part %lf imaginary part %lf",real,img);
   }
    return 0;
}
