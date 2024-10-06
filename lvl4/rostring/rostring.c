#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void rostring(char *str)
{
    int flag = 0;
    int i = 0;
    if(!str)
        return ;
    while(str[i] == ' ' || str[i] == '\t' && str[i] =='\0')
        i++;
    int start = i;
    while(str[i] && (str[i] != ' ' && str[i] != '\t'))
        i++;
    int end = i;
    while(str[i] == ' ' || str[i] == '\t' && str[i] !='\0')
        i++;
    while(str[i])
    {
        while(str[i] != ' ' && str[i] != '\t' && str[i])
        {
            write(1, &str[i], 1);
            i++;
        }
        if(str[i] && (str[i] == ' ' || str[i] == '\t') && (str[i + 1] != '\0'))
            write(1, " ", 1);
        while(str[i] && (str[i] == ' ' || str[i] == '\t'))
            i++;
        if(str[i] == '\0')
            write(1, " ", 1);
    }
    
    while(start < end)
    {
        write(1, &str[start], 1);
        start++;
    }
    write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
    if(argc > 1)
        rostring(argv[1]);
    else
        write(1, "\n", 1);
}