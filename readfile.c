#include "monty.h"

int _readfile_(char **argv, int fileno)
{
        FILE *f;
        char *buffer;
        unsigned int lenf;
        int return_value;

        f = fopen(argv[fileno], "r");
        if (!f)
        {
                printf("Error: Can't open file %s\n", argv[fileno]);
                return (EXIT_FAILURE);
        }
        fseek(f, 0L, SEEK_END);
        lenf = ftell(f);
        fseek(f, 0L, SEEK_SET);
        buffer = malloc(sizeof(char) * (lenf + 1));
        if (!buffer)
                return (EXIT_FAILURE);
        memset(buffer, 0, (lenf + 1));
        fread(buffer, lenf, 1, f);
        fclose(f);
        return_value = _readline_(buffer);
        return (return_value);
}