#include "monty.h"

int _readfile_(char **argv, int fileno)
{
        FILE *f;
        char *buffer;
        unsigned int lenf;

        f = fopen(argv[fileno], "r");
        if (!f)
        {
                fprintf(stderr, "Error: Can't open file %s\n", argv[fileno]);
                exit(EXIT_FAILURE);
        }
        fseek(f, 0L, SEEK_END);
        lenf = ftell(f);
        fseek(f, 0L, SEEK_SET);
        buffer = malloc(sizeof(char) * (lenf + 1));
        if (!buffer)
        {
                fprintf(stderr, "Error: malloc failed\n");
                exit(EXIT_FAILURE);
        }
        memset(buffer, 0, (lenf + 1));
        fread(buffer, lenf, 1, f);
        fclose(f);
        _readline_(buffer);
        free(buffer);
        return (0);
}