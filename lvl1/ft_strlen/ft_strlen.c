#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    if(!str)
        return (-1);
    i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}