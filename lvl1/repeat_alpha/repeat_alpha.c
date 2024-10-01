#include <unistd.h>
void repeat_alpha(char *str)
{
    int counter;
    int i = 0;
    if(!str)
        return ;
    while(str[i])
    {
        counter = 1;
        if(str[i] >= 'a' && str[i] <= 'z')
            counter += str[i] - 'a';
        else if(str[i] >= 'A' && str[i] <= 'Z')
            counter += str[i] - 'A';
        while(counter-- > 0)
        {
            write(1, &str[i], 1);
        }
        i++;
    }
    write(1, "\n", 1);
}
int main(int argc, char *argv[])
{
    if(argc == 2)
        repeat_alpha(argv[1]);
    write(1, "\n", 1);
}