#include "monty.h"

void _pall_(stack_t **head, unsigned int n)
{
        stack_t *tmp = *head;
        (void) n;

        if (!tmp)
                return;
        while (tmp)
        {
                printf("%d\n", tmp->n);
                tmp = tmp->next;
        }
}