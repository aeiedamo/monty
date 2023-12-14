#include "monty.h"

void _push_(stack_t **head, unsigned int n)
{
        int i, j = 0;
        char mode = 's';

        if (!data.arg)
        {
err:
                fprintf(stderr, "L%d: usage: push integer\n", n);
                fclose(data.f);
                free_struct(*head);
                exit(EXIT_FAILURE);
        }
        if (data.arg[0] == '-')
                j++;
        for (; data.arg[j]; j++)
        {
                if (data.arg[j] > '9' || data.arg[j] < '0')
                        mode = 'q';
                if (mode == 'q')
                        goto err;
        }
        i = atoi(data.arg);
        if (data.mode == 's')
                _push_stack_(head, i);
        if (data.mode == 'q')
                _push_queue_(head, i);
}