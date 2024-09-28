#include <unistd.h>

void print_number(int nb)
{
    char buff[10] = "0123456789";
    if(nb <= 9)
        write(1, &buff[nb], 1);
    else
    {
        print_number(nb / 10);
        print_number(nb % 10);

    }
}


int main()
{
    int i = 1;
    while(i <= 100)
    {
        if (i % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if(i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            print_number(i);
        i++;
        write(1, "\n", 1);
    }
}