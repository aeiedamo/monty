#include "monty.h"

int _readline_(char *buffer)
{
        unsigned int i, numoflines = 0;
        unsigned int j, k, l;
        char **lines;
        stack_t *head = NULL;
        int return_value = EXIT_SUCCESS;

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
                return_value = EXIT_FAILURE;
                goto ending;
        }
        for (i = 0, k = 0; i < numoflines; i++, k++)
        {
                for (l = 0; buffer[k] && buffer[k] != '\n'; l++, k++)
                        ;
                lines[i] = malloc(sizeof(char) * (l + 1));
                if (!lines[i])
                {
                        fprintf(stderr, "Error: malloc failed\n");
                        while (i--)
                                free(lines[i]);
                        free(lines);
                        return_value = EXIT_FAILURE;
                        goto ending;
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
                return_value = _exe_(lines[i], &head, i + 1);
                if (return_value != 0)
                        goto ending;
                free(lines[i]);
        }
        free_struct(head);
        free(lines);
ending:
        return (return_value);
}