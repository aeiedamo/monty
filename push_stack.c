#include "monty.h"

void _push_stack_(stack_t **head, int n)
{
        stack_t *new = malloc(sizeof(stack_t)), *tmp = *head;

        if (!new)
        {
                fprintf(stderr, "Error: malloc failed\n");
                exit(EXIT_FAILURE);
        }
        if (tmp)
                tmp->prev = new;
        new->n = n;
        new->next = *head;
        new->prev = NULL;
        *head = new;
}