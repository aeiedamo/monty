#include "monty.h"

char *(_strchr_)(const char *s, int c)
{
        const char ch = c;

        for (; *s != ch; ++s)
                if (*s == '\0')
                        return (NULL);
        return ((char *)s);
}

char *_strstr_(const char *s1, const char *s2)
{
        const char *saves1, *saves2;
        if (*s2 == '\0')
                return ((char *)s1);
        for (; (s1 = _strchr_(s1, *s2)); ++s1)
        {
                for (saves1 = s1, saves2 = s2;;)
                {
                        if(*++saves2 == '\0')
                                return ((char *)s1);
                        else if (*++saves1 != *saves2)
                                break;
                }
        }
        return (NULL);
}