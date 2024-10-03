#include <unistd.h>

void first_word(char *str)
{   
    int i = 0;
    int j;
    if(!str)
    {
        write(1, "\n", 1);
        return ;
    }
    while(str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    j = i;
    while(str[i] && str[i] != ' ' && str[i] != '\t')
            i++;
    while(j < i)
    {
        write(1, &str[j], 1);
        j++;
    }
    write(1, "\n", 1);
}


int main(int argc, char *argv[])
{
    if(argc == 2)
        first_word(argv[1]);
    else
        write(1, "\n", 1); 
}