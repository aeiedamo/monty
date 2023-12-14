#include "monty.h"

int main(int argc, char **argv)
{
        FILE *f;

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
        _readline_(f);
        fclose(f);
        return (0);
}