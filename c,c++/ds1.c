#include <stdio.h>
#include <conio.h>
void insert(void);
void del(void);
void display(void);

int cque[5];
int i, j, front = -1, rear = -1, qmax = 5, element, count = 0, code;

void main()
{
    
    do
    {
        printf("\nEnter a choice\n");
        printf("1: for Insertion\n2: for Deletion\n3: for Display\n4: for Exit\n");
        scanf("%d", &code);
        switch (code)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("Wrong choice\n");
            break;
        }
    } while (code != 4);
    getch();
}

void insert()
{
    if ((front == 0 && rear == qmax - 1) || (front == rear + 1))
        printf("circular que is full\n");
    else
    {
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (rear == qmax - 1)
            rear = 0;
        else
            rear = rear + 1;
        printf("Enter a element for insertion\n");
        scanf("%d", &element);
        cque[rear] = element;
        count++;
    }
}
void del()
{
    if (front == -1)
        printf("circular que is empty\n");
    else
    {
        element = cque[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == qmax - 1)
            front = 0;
        else
            front = front + 1;
        printf("Element %d has been deleted\n", element);
        count--;
    }
}
void display()
{
    if (front == -1)
        printf("Queue is empty\n");
    else
    {
        for (i = front, j = 1; j <= count; j++, i = (i + 1) % qmax)
        {
            printf("%d\t", cque[i]);
        }
    }
}
