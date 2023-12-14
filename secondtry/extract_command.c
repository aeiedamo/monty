#include "monty.h"

char *extract_command(char *buffer)
{
        unsigned int i, j = 0, k;
        char *s = NULL;

        for (i = 0; buffer[i]; i++)
                if (buffer[i] >= 'a' && buffer[i] <= 'z')
                        break;
        k = i; /*to store the first location of a command*/
        for (; buffer[i]; i++)
                if (buffer[i] != ' ' || buffer[i] != '\n')
                        j++;
        s = malloc((j + 1) * sizeof(char));
        memset(s, 0, j + 1);
        for (i = 0; buffer[k], k++)
        {
                s[i] = buffer[k];
                i++;
        }
        return (s);
}