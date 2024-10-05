#include <unistd.h>
#include <stdlib.h>

void rev_wstr(char *str)
{
    int len = 0;
    int i = 0;
    if(!str)
        return ;
    while(str[len])
        len++;
    while(len >= 0)
    {
        while(str[len] == ' ' || str[len] == '\t' || str[len] == '\0')
            len--;
        int end = len;
        while(str[len] && (str[len] != ' ' && str[len] != '\t'))
            len--;
        int start = len + 1;
        int flag = start;
        while(start <= end)
        {
            write(1, &str[start], 1);
            start++;
        }
        if(flag != 0)
            write(1, " ", 1);
    }
    write(1, "\n", 1);
}



int main(int argc, char *argv[])
{
    if (argc == 2)
        rev_wstr(argv[1]);
    else
        write(1, "\n", 1);
}