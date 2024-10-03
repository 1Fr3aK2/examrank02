#include <unistd.h>

void search_and_replace(char *s1, char *s2, char *s3)
{
    if(!s1 || !s2 || !s3)
        return ;
    int i = 0;
    int j = 0;
    int k = 0;
    if(s2[i] == '\0' || s2[i + 1] != '\0')
    {
        write(1, "\n", 1);
        return ;
    }
    if(s3[i] == '\0' || s2[i + 1] != '\0')
    {
        write(1, "\n", 1);
        return ;
    }
    while(s1[i])
    {
        if(s1[i] == s2[j])
            s1[i] = s3[k];
        write(1, &s1[i], 1);        
        i++;
    }
    write(1, "\n", 1);
}




int main(int argc, char *argv[])
{
    if(argc == 4)
        search_and_replace(argv[1], argv[2], argv[3]);
    else
        write(1, "\n", 1);
}