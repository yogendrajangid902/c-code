#include<stdio.h>
int main()
{
    long int n, fact;
    // fact= factorial(n);
    // printf("the factroial is: %d ", fact);
    printf("enter the no: ");
    scanf("%ld",&n);
    fact = factorial(n);
    printf("the factroial is: %ld ", fact);
    return 0;
}

int factorial(long int a)
{
    
    if (a>=1)


    return (a* factorial(a-1));
else 
return 1;
}
// int factorial(int a, int c)
// {
//     c = c*a;
//     a--;
//     if (a>=1)
//     {
//         factorial( a, c);
//     }
//     else
//     {
//         printf("the factroial is: %d ", c);
//     }
    
    

// }