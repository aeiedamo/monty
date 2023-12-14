#include "monty.h"

int _exe_(char *buffer, stack_t **head, unsigned int i, FILE *f)
{
        instruction_t ops[] = { {"push", _push_}, {"pall", _pall_}
        };
        unsigned int j = 0;
        char *op;

        op = strtok(buffer, delimit);
        if (op && op[0] == '#')
                return (0);
        data.arg = strtok(NULL, "\n\t");

        for (; ops[j].opcode && op; j++)
        {
                if (strcmp(op, ops[j].opcode) == 0)
                {
                        ops[i].f(head, i);
                        return (0);
                }
        }
        if (op && !ops[i].opcode)
        {
                fprintf(stderr, "L%d: unknown instruction %s\n", i, op);
                fclose(f);
                free(buffer);
                free_struct(*head);
                exit(EXIT_FAILURE);
        }
        return (1);
}