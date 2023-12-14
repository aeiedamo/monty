#include "monty.h"

storage data = {'s', NULL, NULL, NULL};

int main(int argc, char **argv)
{
        char *buffer;
        FILE *f;
        size_t size = 0;
        ssize_t pastRead = 1;
        stack_t *stack = NULL;
        unsigned int i = 0;

        if (argc != 2)
        {
                fprintf(stderr, "USAGE: monty file\n");
                exit(EXIT_FAILURE);
        }
        f = fopen(argv[1], "r");
        if (!f)
        {
                fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
                exit(EXIT_FAILURE);
        }
        while (pastRead > 0)
        {
                buffer = NULL;
                pastRead = getline(&buffer, &size, f);
                data.buffer = buffer;
                i++;
                if (pastRead > 0)
                        _exe_(buffer, &stack, i, f);
                free(buffer);
        }
        free_struct(stack);
        fclose(f);
        return (0);
}