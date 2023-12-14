#include "monty.h"

void _readline_(FILE *f)
{
        ssize_t i;
        size_t j;
        char *buffer;
        unsigned int numoflines = 1;
        stack_t *head = NULL;
        char *cmd = NULL;

        while ((i = getline(&buffer, &j, f)) >= 0)
        {
                if (!buffer || buffer[0] == '#')
                {
                        numoflines++;
                        continue;
                }
                cmd = extract_command(buffer);
                if (strcmp(cmd, "push") == 0)
                        push()
        }
        free(buffer);
}