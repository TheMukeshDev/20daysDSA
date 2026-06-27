#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

int main()
{
    struct Node *current, *temp, *head = NULL, *tail = NULL;
    int i, n;

    printf("Enter the size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        current = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter number: ");
        scanf("%d", &current->data);

        current->prev = NULL;
        current->next = NULL;

        if (head == NULL)
        {
            head = current;
            tail = current;
        }
        else
        {
            tail->next = current;
            current->prev = tail;
            tail = current;
        }
    }


    struct Node *ptr1;
    int swapped, x;

    do
    {
        swapped = 0;
        ptr1 = head;

        while (ptr1->next != NULL)
        {
            if (ptr1->data > ptr1->next->data)
            {
                x = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = x;

                swapped = 1;
            }
            ptr1 = ptr1->next;
        }

    } while (swapped);

    
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    temp = tail;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }

    return 0;
}