#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{

    int sign = 1;
    int number = 0;

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
    return (number *sign);
}

int is_prime(int nb)
{
    int i = 2;
    if(nb <= 1)
        return (0);
    while(nb >= i * i)
    {
        if(nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

void ft_putnbr(int nb)
{
    char buff[10] = "0123456789";
    if(nb <= 9)
        write(1, &buff[nb], 1);
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}


void  add_prime_sum(char *str)
{
    if(!str)
        return ;
    int nb = ft_atoi(str);
    int result = 0;
    while(nb > 0)
    {
        if(is_prime(nb) == 1)
            result += nb;
        nb--;
    }
    ft_putnbr(result);
    write(1, "\n", 1);
}



int main(int argc, char *argv[])
{
    if(argc == 2)
        add_prime_sum(argv[1]);
    else
        write(1, "0\n", 2);
}