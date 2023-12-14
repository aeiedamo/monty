#include "monty.h"

int _exe_(const char *lines, stack_t **head, unsigned int n)
{
        char *s = _command_(lines);

        if (strcmp(s, "push") == 0)
        {
                if (_value_(lines, n) == NULL)
                        return (EXIT_FAILURE);
                push(head, atoi(_value_(lines, n)));
        }
        return (0);
}