#include "monty.h"

/* this seperates the command from the rest of lines but you should always free the memory after using it*/
char *_command_(const char *lines)
{
        unsigned int i, j;
        char *s;

        for (i = 0, j = 0; lines[i]; i++)
                if (lines[i] >= 'a' && lines[i] <= 'z')
                        j++;
        s = malloc(sizeof(char) * (j + 1));
        memset(s, 0, (j + 1));
        for (i = 0, j = 0; lines[i]; i++)
                if ((lines[i] >= 'a' && lines[i] <= 'z'))
                {
                        s[j] = lines[i];
                        j++;
                }
        return (s);
}

int _value_(const char *lines)
{
        unsigned int i, j = 0;
        char *s;

        for (i = 0; lines[i]; i++)
                if (lines[i] >= '0' && lines[i] <= '9')
                        j++;
        s = malloc(sizeof(char) * (j + 1));
        memset(s, 0, (j + 1));
        for (i = 0, j = 0; lines[i]; i++)
                if (lines[i] >= '0' && lines[i] <= '9')
                {
                        s[j] = lines[i];
                        j++;
                }
        i = atoi(s);
        free(s);
        return (i);
}