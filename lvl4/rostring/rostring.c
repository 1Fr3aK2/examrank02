#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int count_words(char *str)
{
    int i = 0;
    int words = 0;
    if(!str)
        return (-1);
    while(str[i] && str[i] == ' ' && str[i] == '\t')
        i++;
    if(str[i])
        words++;
    while(str[i] &&str[i] != ' ' && str[i] != '\t')
        i++;
}


char *rostring(char *str)
{
    char *result;
    char *first_word;
    char *first_word_end;
    int word_printed = 0;
    while(*str && *str == ' ' || *str == '\t')
        str++;
    first_word = str;
    while(*str && *str != ' ' && *str != '\t')
        str++;
    first_word_end =  str;
    if(*str)
    {
        while(*str)
        {
            if(*str == ' ' || *str == '\t')
            {
                while(*str == ' ' || *str == '\t')
                    str++;
                if(*str && word_printed == 1)
                    write(1, " ", 1);
            }
            else
            {
                write(1, str, 1);
                str++;
                word_printed = 1;
            }
            
        }
        if (word_printed) 
            write(1, " ", 1);
    }
    while (first_word < first_word_end)
    {
        write(1, first_word, 1);
        first_word++;
    }

}


int main(int argc, char *argv[])
{
    if(argc > 1)
        rostring(argv[1]);
    write(1, "\n", 1);
}