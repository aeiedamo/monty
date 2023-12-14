#include "monty.h"

int _exe_(const char *lines, stack_t **head, unsigned int n)
{
        char *s = _command_(lines);
        int i = _value_(lines, n);
        char mode = 's';

        if (strcmp(s, "push") == 0)
        {
                free(s);
                push(head, i);
                return (0);
        }
        if (strcmp(s, "pall") == 0)
        {
                free(s);
                pall(head, mode);
                return (0);
        }
        fprintf(stderr, "L%d: unknown instruction %s\n", n, s);
        exit(EXIT_FAILURE);
}