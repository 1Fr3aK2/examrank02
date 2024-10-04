#include <unistd.h>

void rev_print(char *str)
{
    if(!str)
        return ;
    int i = 0;
    int len = 0;
    while(str[i])
    {
        len++;
        i++;
    }
    while(str[--len])
    {
        write(1, &str[len], 1);
    }
    write(1, "\n", 1);
}

int main (int argc, char *argv[])
{
    if(argc == 2)
        rev_print(argv[1]);
    else 
        write(1, "\n", 1);
}