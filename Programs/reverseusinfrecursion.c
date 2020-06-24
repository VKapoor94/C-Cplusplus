#include<stdio.h> // include stdio.h library
void reverse_num(int num);
 
 
int main(void)
{    
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);       
    
    reverse_num(num);
    
    return 0; // return 0 to operating system
}
 
 
void reverse_num(int num)
{    
    int rem;
    
    // base condition
    if (num == 0)
    {
        return;
    }
    
    else
    {
        rem = num % 10; // get the rightmost digit
        printf("%d", rem);
        reverse_num(num/10);  // recursive call
    }
        
}