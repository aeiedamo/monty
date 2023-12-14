#include "monty.h"

/* this seperates the command from the rest of lines but you should always free the memory after using it*/
char *_command_(const char *lines)
{
        unsigned int i, j, k;
        char *s;

        for (i = 0, j = 0; lines[i]; i++)
                if ((lines[i] >= 'a' && lines[i] <= 'z'))
                        break;
        k = i;
        for (; lines[i]; i++)
                if (lines[i] != ' ')
                        j++;
        s = malloc(sizeof(char) * (j + 1));
        memset(s, 0, (j + 1));
        for (k = 0, j = 0; lines[k]; k++)
                if ((lines[k] >= 'a' && lines[k] <= 'z'))
                {
                        s[j] = lines[k];
                        j++;
                }
        return (s);
}

char *_value_(const char *lines, const unsigned int n)
{
        unsigned int i, j, k;
        char *s;

        for (i = 0, j = 0; lines[i]; i++)
                if ((lines[i] >= 'a' && lines[i] <= 'z'))
                        break;
        for (; lines[i]; i++)
                if (!(lines[i] >= '0' && lines[i] <= '9'))
                {
                        fprintf(stderr, "L%d: usage: push integer\n", n);
                        return (NULL);
                }
        if (j == 0 || lines[i] == ' ')
        {
                
                return (NULL);
        }
        s = malloc(sizeof(char) * (j + 1));
        memset(s, 0, (j + 1));
        for (k = 0, j = 0; lines[k] && lines[k] != ' '; k++)
                if ((lines[k] >= '0' && lines[k] <= '9'))
                {
                        s[j] = lines[k];
                        j++;
                }
        return (s);
}