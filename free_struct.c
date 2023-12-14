#include "monty.h"

void free_struct(stack_t *head)
{
        stack_t *tmp = head;

        while (tmp)
        {
                tmp = tmp->next;
                free(head);
                head = tmp;
        }
}