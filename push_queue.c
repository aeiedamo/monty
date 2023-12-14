#include "monty.h"

void _push_queue_(stack_t **head, int n)
{
        stack_t *new = malloc(sizeof(stack_t)), *tmp = *head;

        if (!new)
        {
                fprintf(stderr, "Error: malloc failed\n");
                exit(EXIT_FAILURE);
        }
        new->n = n;
        new->next = NULL;
        if (tmp)
        {
                while (tmp && tmp->next)
                        tmp = tmp->next;
        }
        if (!tmp)
        {
                *head = new;
                new->prev = NULL;
        }
        else
        {
                tmp->next = new;
                new->prev = tmp;
        }
}