#include "monty.h"

stack_t *free_struct(stack_t *head)
{
        stack_t *tmp = head;

        while (tmp)
        {
                tmp = tmp->next;
                free(head);
                head = tmp;
        }
        return (tmp);
}