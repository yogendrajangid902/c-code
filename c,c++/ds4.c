#include<stdio.h>
void main()
{
    int a[10],ser,i;  
    printf("enter 10 value: \n");
    for (i=0;i<10;i++)
    {
        printf("enter the %d value\n",i+1);
        scanf("%d",&a[i]);
    }
    printf("enter the value to be searched \n");
    scanf("%d",&ser);
    for (i=0;i<10;i++)
    {
        if (ser==a[i])
        {   
            printf("the eliment %d is found at location %d",ser,i+1);
            break;

        }
    }
        if (i>=10)
        printf("enter the value not found\n");
    


}