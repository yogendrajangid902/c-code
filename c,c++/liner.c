#include <stdio.h>

void main()
{
    int q[10],i,value;
    printf("enter the \n");
    for(i=0;i<10;i++)
    scanf("%d",&q[i]);
    printf("qwenter the value which u want to search \n");
    scanf("%d",&value);
    for (i=0;i<10;i++)
    {
    if(value==q[i])
    {
    break;
    }
    if(i>=10)
    {
    printf("the value is not found\n");
    }
    else
{
    printf("the value %d is found at location %d\n",value,i+1);
}
    }
}