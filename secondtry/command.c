#include "monty.h"

char *_command_(char *buffer)
{
        unsigned int i, j;
        char *s;

        for (i = 0, j = 0; buffer[i]; i++)
                if (buffer[i] >= '0' && buffer[i] <= '9')
                        j++;
        s = malloc((j + 1)* sizeof(char));
        memset(s, 0, (j + 1));
        for (i = 0, j = 0; buffer[i]; i++)
                if (buffer[i] >= '0' && buffer[i] <= '9')
                {
                        s[j] = buffer[i];
                        j++;
                }
        return (s);
}