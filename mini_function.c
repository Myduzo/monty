
#include "monty.h"
/**
 * 
 * 
 */
int _isdigit(char *str)
{
    int x = 0;

    if (str[0] == '-')
        x++;

    while (str[x])
    {
        if (str[x] >= '0' && str[x] <= '9')
            x++;
        else
            return (1);
    }
    return (0);
}


