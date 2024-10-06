#include <unistd.h>
#include <stdio.h>

void  snake_to_camel(char *str)
{
    int  i = 0;
    if(!str)
        return ;
    while(str[i])
    {
        while(str[i] && (str[i] != '_'))
        {
            write(1, &str[i], 1);
            i++;
        }
        if(str[i] && str[i] == '_')
            i++;
        if(str[i] && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] -= 32;
            write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}



int main(int argc, char *argv[])
{
    if(argc == 2)
        snake_to_camel(argv[1]);
    else
        write(1, "\n", 1);
}