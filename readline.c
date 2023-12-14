#include "monty.h"

int _readline_(char *buffer)
{
        unsigned int i, numoflines = 0;
        unsigned int j, k, l;
        char **lines;
        stack_t *head = NULL;

        if (!buffer)
                return (1);
        for (i = 0; buffer[i]; i++)
                if (buffer[i] == '\n')
                        numoflines++;
        if (buffer[i] == '\0')
                numoflines++;
        lines = malloc(sizeof(char *) * numoflines);
        if (!lines)
        {
                fprintf(stderr, "Error: malloc failed\n");
                exit(EXIT_FAILURE);
        }
        for (i = 0, k = 0; i < numoflines; i++, k++)
        {
                for (l = 0; buffer[k] && buffer[k] != '\n'; l++, k++)
                        ;
                lines[i] = malloc(sizeof(char) * (l + 1));
                if (!lines[i])
                {
                        fprintf(stderr, "Error: malloc failed\n");
                        exit(EXIT_FAILURE);
                }
                memset(lines[i], 0, (l + 1));
        }
        for (i = 0, k = 0; i < numoflines; i++, k++)
        {
                for (j = 0; buffer[k] && buffer[k] != '\n'; k++, j++)
                        lines[i][j] = buffer[k];
        }
        for (i = 0; i < numoflines; i++)
        {
                _exe_(lines[i], &head, i + 1);
                free(lines[i]);
        }
        free_struct(head);
        free(lines);
        return (EXIT_SUCCESS);
}