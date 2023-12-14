#include "monty.h"

int main(int argc, char **argv)
{
        int return_value;
        if (argc != 2)
        {
                fprintf(stderr, "USAGE: monty file\n");
                exit(EXIT_FAILURE);
        }
        return_value = _readfile_(argv[1]);
        if (return_value != 0)
                exit(return_value);
        return (0);
}