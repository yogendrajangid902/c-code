#include <stdio.h>

// declaring the recursive function
int GCD(int a, int b);

int main()
{
    int a, b, gcd;
    printf("\n\n Recursion : Find GCD of two numbers :\n");
    printf(" Input 1st number: ");
    scanf("%d", &a);
    printf(" Input 2nd number: ");
    scanf("%d", &b);
    gcd = GCD(a, b);
    printf("\n\nGCD of %d and %d is: %d\n\n", a, b, gcd);
    return 0;
}

// defining the function
int GCD(int x, int y)
{
    if (x > y)
        GCD(x - y, y);

    else if (y > x)
        GCD(x, y - x);
    else
        return x;
}