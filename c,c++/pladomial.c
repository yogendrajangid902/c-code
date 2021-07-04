#include <stdio.h>
int main()
{
    int n, r= 0, a, d;
    printf("Enter an integer: ");
    scanf("%d", &n);
    d = n;

    // reversed integer is stored in reversedN
    while (n != 0)
    {
        a = n % 10;
        r = r * 10 + a;
        n /= 10;
    }

    // palindrome if orignalN and reversedN are equal
    if (d == r)
        printf("%d is a palindrome.", d);
    else
        printf("%d is not a palindrome.", d);

    return 0;
}