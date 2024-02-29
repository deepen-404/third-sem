#include <stdio.h>
#include <stdlib.h>

int stack[10], i, j, n, choice = 0, top = -1;

void push();
void pop();
void display();
void checkEmpty();
void checkFull();

int main()
{
    system("cls");
    printf("Enter the number of elements to be inserted in the stack:\t");
    scanf("%d", &n);
    printf("******** Stack Operation Using Array ********");
    printf("\n---------------------\n");
    do
    {
        printf("Choose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Check Empty\n5.Check Full\n6.Exit");
        printf("\nEnter your choice:\t");
        scanf("%d", &choice);
        printf("\n");
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
            break;
        case 4:
            checkEmpty();
            break;
        case 5:
            checkFull();
            break;
        case 6:
            printf("Exiting....");
            exit(0);
            break;
        default:
            printf("Enter a valid choice");
        }
    } while (choice !=6 && choice > 0);

    return 0;
}

void push()
{
    int val;
    if (top == n - 1)
        printf("\nOverflow...");
    else
    {
        printf("Enter a value: \t");
        scanf("%d", &val);
        top += 1; // top = top  + 1
        stack[top] = val;
    }
}

void pop()
{
    if (top == -1)
        printf("Underflow...\n");
    else
    {
        printf("Popped element: %d\n", stack[top]);
        top -= 1;
    }
}

void display()
{
    if (top == -1)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        for (i = top; i >= 0; i--) // 1 2 3 4
        {
            printf("%d\t", stack[i]);
        }
    }
    printf("\n");
}

void checkEmpty()
{
    if (top == -1)
    {
        printf("Stack is empty");
    }
}
void checkFull()
{
    if (top == n - 1)
    {
        printf("Stack is full");
    } else {
    	printf("Stack has hold other numbers");
	}
}
