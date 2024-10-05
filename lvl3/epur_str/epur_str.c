#include <stdio.h>
#include <unistd.h>

void epur_str(char *str)
{
    if(!str)
        return ;
    int i = 0;
    while(str[i] && str[i] == ' ' || str[i] == '\t')
        i++;
    while(str[i])
    {
        while(str[i] && (str[i] != '\t' && str[i] != ' '))
        {
            write(1, &str[i], 1);
            i++;
        }
        while(str[i] && (str[i] && str[i] == ' ' || str[i] == '\t'))
        {
            i++;
        }
        if(str[i])
            write(1, " ", 1);
    }
    write(1, "\n", 1);
    
}




int main(int argc, char *argv[])
{
    if (argc == 2)
        epur_str(argv[1]);
    else
        write(1, "\n", 1);
}