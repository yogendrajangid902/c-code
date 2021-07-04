#include<stdio.h>

int main()
{
    
    int a;
    int b;
    int c;
    int i;
    a=0;
    b=1;
    printf("%d\n",a);
    printf("%d\n",b);
    for (i=0;i<10;i++)
    {
        c=a+b;
        printf(" %d\n",c);
        a=b;
        b=c;
    }
    
}