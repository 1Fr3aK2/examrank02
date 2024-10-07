#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	if(!str)
		return (-2);
	int number = 0;
	int sign = 1;
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

void print_hex(int nb)
{
	char buff[17] = "0123456789abcdef";
	if(nb >= 16)
		print_hex(nb / 16);
	write(1, &buff[nb % 16], 1);
}

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		print_hex(ft_atoi(argv[1]));
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}