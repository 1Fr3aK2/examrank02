#include <unistd.h>
#include <stdlib.h>

void ft_putnbr(int n)
{
	if(n >= 10)
		ft_putnbr(n / 10);
	char result =  (n % 10) + '0';
	write(1, &result, 1);
}

int main(int argc, char *argv[])
{
	// (void)argv;
	ft_putnbr(argc - 1);
	write(1, "\n", 1);
}