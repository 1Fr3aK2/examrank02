#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void fprime(char *nbr)
{
    if(!nbr)
        return ;
    int nb;
    nb = atoi(nbr);
    if(nb == 1)
        printf("1");
    int i = 1;
    while(nb >= ++i)
    {
        if(nb % i == 0)
        {
            printf("%d", i);
            if(nb == i)
                break;
            printf("*");
            nb /= i;
            i = 1;
        }
    }
    printf("\n");
}




int main(int argc, char *argv[])
{
    if(argc == 2)
        fprime(argv[1]);
    else
        write(1, "\n", 1);
}