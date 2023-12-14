#include "monty.h"

int main(int argc, char **argv)
{
        int i, return_value;

        if (argc < 2)
        {
                printf("USAGE: monty file\n");
                exit(EXIT_FAILURE);
        }
        for (i = 1; i < argc; i++)
        {
                return_value = _readfile_(argv, i);
                if (return_value != EXIT_FAILURE)
                        exit(EXIT_FAILURE);
        }
        return (0);
}