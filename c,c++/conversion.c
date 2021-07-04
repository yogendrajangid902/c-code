#include<stdio.h>

#include<math.h>
int main()
{
    int i,b,j,n;
    printf("give the number in decimal\n");
    scanf("%d",&n);
    j=0;
    b=0;
    while(n>0)
    {
        i=n%2;
        b=b+i*pow(10,j);
        j=j+1;
        n=n/2;
    }
    printf("the num in binery is\n",b);
getch();
return 0;
}