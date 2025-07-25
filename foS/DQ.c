#include <stdio.h>

int a[20], size, front = -1, rear = -1;

void Display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("Empty\n");
    }
    else
    {
        for (i = front; i != rear; i = (i + 1) % size)
        {
            printf("%d\t", a[i]);
        }
        printf("%d\n", a[i]);
    }
}

void PUSHDQ()
{
    int elem;
    printf("Input the element to be inserted");
    scanf("%d", &elem);

    if ((rear + 1) % size == front)
    {
        printf("Queue is full");
    }
    else if (front == -1 && rear == -1)
    {
        front++;
        rear++;
        a[front] = elem;
    }
    else if (front == 0)
    {
        front = size - 1;
        a[front] = elem;
    }
    else
    {
        front--;
        a[front] = elem;
    }

    Display();
}

void INJECT()
{
    int elem;

    if ((rear + 1) % size == front)
    {
        printf("Queue is full");
    }
    else if (front == -1 && rear == -1)
    {
        printf("Input the element to be inserted");
        scanf("%d", &elem);
        front++;
        rear++;
        a[rear] = elem;
    }
    else
    {
        printf("Input the element to be inserted");
        scanf("%d", &elem);
        rear = (rear + 1) % size;
        a[rear] = elem;
    }

    Display();
}

void POPDQ()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty");
    }
    else if (front == rear)
    {
        printf("Remove item is %d\n", a[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("Removed item is %d\n", a[front]);
        front = (front + 1) % size;
    }

    Display();
}

void EJECT()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty");
    }
    else if (front == rear)
    {
        printf("Remove item is %d\n", a[rear]);
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
    {
        printf("Remove item is %d\n", a[rear]);
        rear = size - 1;
    }
    else
    {
        printf("Removed item is %d\n", a[rear]);
        rear--;
    }

    Display();
}

void main()
{

    int choice, condition = 1;

    printf("Input the max size : ");
    scanf("%d", &size);

    do
    {
        printf("Menu\n1.Enqueue\n2.Dequeue\n3.Display\nInput your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            INJECT();
            break;
        case 2:
            EJECT();
            break;
        case 3:
            Display();
            break;
        case 4:
            condition = 0;
            break;
        }
    } while (condition);
}
