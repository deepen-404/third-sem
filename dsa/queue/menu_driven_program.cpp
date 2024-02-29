#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 20

struct queue
{
    int item[size];
    int rear;
    int front;
};

typedef struct queue qu;

void insert(qu *);
void deleteItem(qu *);
void display(qu *);

void main()
{
    int ch;
    qu *q;
    q->rear = -1;
    q->front = 0;

    system("cls");
    printf("Menu for program:\n");

    printf("1 : insert, 2 : delelte,  3 : display, 4 : exit,\n");

    do
    {
        printf("Enter your choice\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insert(q);
            break;
        case 2:
            delete (q);
            break;
        case 3:
            display(q);
            break;
        case 4:
            exit(1);
            break;

        default:
            printf("Invalid Choice");
            break;
        }

    } while (ch > 0 and ch > 5);
    getch();
}

// insert function
void insert(qu *q) {
    int d;
    printf("Enter data to be inserted");
    
}