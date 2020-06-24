
//30-1 2 3 5 10 15 30
//45-1 3 5 9 15 45

#include <stdio.h>
int main() {
    int n1, n2, i, gcd, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; ++i) {
        
        // check if i is a factor of both integers
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;
    printf("The GCD of two numbers %d and %d is %d.", n1, n2, gcd);
    printf("The LCM of two numbers %d and %d is %d.", n1, n2, lcm);
    return 0;
}