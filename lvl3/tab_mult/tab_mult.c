#include <unistd.h>
int ft_atoi(char *str)
{
    int number = 0;
    int sign = 1;
    if(!str)
        return (-1);
    while(*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    while(*str == '-' || *str == '+')
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

int ft_putnbr(int nbr)
{
    char buff[10] = "0123456789";
    if(nbr <= 9)
        write(1, &buff[nbr], 1);
    else
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
}

void tab_mult(char *str)
{
    int nb = ft_atoi(str);
    int i = 1;
    int result;
    while(i < 10)
    {
        result = (i *nb);
        ft_putnbr(i);
        write(1, " x ", 3);
        ft_putnbr(nb);
        write(1, " = ", 3);
        ft_putnbr(result);
        write(1, "\n", 1);
        i++;
    }
}

int main(int argc, char *argv[])
{
    if(argc > 1)
        tab_mult(argv[1]);
    else
        write(1, "\n", 1);
}