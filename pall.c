#include "monty.h"

stack_t *pall(stack_t **head, unsigned int n)
{
        stack_t *tmp = *head;

        if (n == 'q')
        {
                while (tmp)
                {
                        printf("%d\n", tmp->n);
                        tmp = tmp->next;
                }
        }
        else if (n == 's')
        {
                while (tmp->next)
                        tmp = tmp->next;
                while (tmp)
                {
                        printf("%d\n", tmp->n);
                        tmp = tmp->prev;
                }
        }
        return (*head);
}