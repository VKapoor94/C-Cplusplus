/*  
This program will find the sum of Natural 
Number/Factorial of Number of all natural numbers from 1 to N.
*/
//Series: 1/1! + 2/2! + 3/3! + 4/4! + ... N/N!
#include<stdio.h>
    
/*function to find factorial of the number*/
 long factorial(int num)
{
	int i;
	/*always assign 1, if variable multiplies with values*/
	 long fact=1;
	
	/*multiply num*num-1*num-2*..1*/
	for(i=1; i<=num; i++)
		fact= fact*i;
	
	/*return factorial*/
	return fact;
}

int main()
{
	int i,N;
	float sum;
	
	/*read value of N*/
	printf("Enter the value of N: ");
	scanf("%d",&N);
	
	/*set sum by 0*/
	sum=0.0f;
	
	/*calculate sum of the series*/
	for(i=1;i<=N;i++)
		sum = sum + ( (float)(i) / (float)(factorial(i)) );
	
	/*print the sum*/
	
	printf("Sum of the series is: %f\n",sum);
	
	return 0;
}
