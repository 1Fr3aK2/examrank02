#include <unistd.h>

void expand_str(char *str)
{
    int i = 0;
    if(!str)
        return ;
    while(str[i])
    {
        while(str[i] && (str[i] == '\t' || str[i] == ' '))
            i++; 
        while(str[i] && (str[i] != ' ' && str[i] != '\t'))
        {
            write(1, &str[i], 1);
            i++;
        }
        if(str[i] && (str[i] == ' ' || str[i] == '\t')  && str[i + 1] != '\0')
            write(1, "   ", 3);
    }
    write(1, "\n", 1);
}


int main(int argc, char *argv[])
{
    if(argc == 2)
        expand_str(argv[1]);
    else
        write(1, "\n", 1);
}