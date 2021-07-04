#include <stdio.h>
#include <conio.h>
void push(), pop(), display();
int capacity = 10;
int STACK[10], TOP = -1, choice, i, value;
void push()
{
    if (TOP == capacity - 1)
    {
        printf("STACK overflow\n");
    }
    else
    {
        printf("Enter a value for push\n");
        scanf("%d", &value);
        TOP = TOP + 1;
        STACK[TOP] = value;
    }
}

void pop()
{
    if (TOP == -1)
        printf("stack is underflow \n");
    else
    {
        printf("Element %d has been popped \n", STACK[TOP]);
        TOP = TOP - 1;
    }
}

void display()
{
    if (TOP == -1)
        printf("Stack is empty\n");
    else
    {
        for (i = TOP; i >= 0; i--)
            printf("%d \n", STACK[i]);
    }
}

void main()
{
    clrscr();
    do
    {
        printf("Enter your choice\n");
        printf("1: push operation\n");
        printf("2: pop operation \n");
        printf("3: Display stack \n");
        printf("4: Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
        case 4:
            break;
        default:
            printf("wrong choice \n");
        }
    } while (choice != 4);
    getch();
}
