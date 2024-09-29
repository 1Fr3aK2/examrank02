#include <unistd.h>

void rotone(char *str)
{
    if(!str)
        return ;
    while(*str)
    {
        if(*str >= 'a' && *str <= 'y' || *str >= 'A' && *str <= 'Y')
            *str += 1;
        else if(*str == 'z' || *str == 'Z')
            *str -= 25;
        write(1, str, 1);
        str++;
    }
}


int main(int argc, char*argv[])
{
    if(argc == 2)
        rotone(argv[1]);
    write(1, "\n", 1);
}