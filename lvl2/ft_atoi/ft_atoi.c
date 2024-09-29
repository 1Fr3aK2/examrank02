#include <unistd.h>


int     ft_atoi(const char *str)
{
    int number = 0;
    int sign = 1;
    while(*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if(*str == '+' || *str == '-')
    {
        if(*str == '-')
            sign = -1;
        str++;
    }
    while(*str >= '0' && *str <= '9')
    {
        number *= 10;
        number += *str - 48;
        str++;
    }
    return (number * sign);
}