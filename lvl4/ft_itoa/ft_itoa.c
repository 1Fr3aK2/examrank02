#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

char    *ft_itoa(int nbr)
{
    char *result;
    int len = 0;
    int nb = nbr;
    if(nbr == INT_MAX)
        return (INT_MAX);
    if(nbr <= 0)
        len++;
    while(nb != 0)
    {
        len++;
        nb /= 10;
    }
    result = (char *)malloc(sizeof(char) * (len + 1));
    if(!result)
        return (NULL);
    result[len] = '\0';
    if(nbr == 0) 
    {
        result[0] = '0';
        return (result);
    }
    if(nbr < 0)
    {
        result[0] = '-';
        nbr = -nbr;
    }
    while(nbr != 0)
    {
        result[--len] = (nbr % 10) + '0';
        nbr /= 10;
    }
    return (result);
}