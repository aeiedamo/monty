#include "monty.h"

void push(stack_t **head, unsigned int n)
{
        stack_t *new = malloc(sizeof(stack_t));

        if (!new)
                return;
        new->n = n;
        new->next = NULL;
        if ((*head))
        {
                for (; (*head)->next; (*head)=(*head)->next)
                        ;
                (*head)->next = new;
                new->prev = (*head);
                for (; (*head)->prev; (*head)=(*head)->prev)
                        ;
        }
        else
        {
                new->prev = NULL;
                (*head) = new;
        }
}