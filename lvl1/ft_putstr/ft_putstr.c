#include <unistd.h>

void	ft_putstr(char *str)
{
    if(!str)
        return ;
    while(*str)
    {
        write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
    if(argc == 2)
        ft_putstr(argv[1]);
    else
        write(1, "\n", 1);
}