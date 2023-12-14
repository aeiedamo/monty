#include "monty.h"

void fix_head(stack_t *head)
{
        if (!head)
                return;
        for (; head->prev; head=head->prev)
                ;
}