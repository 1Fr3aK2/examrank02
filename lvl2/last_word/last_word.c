#include <stdio.h>
#include <unistd.h>

void last_word(char *str)
{
	if(!str)
		return ;
	int len = 0;
	while(str[len])
	{
		len++;
	}
	int i = len - 1;
	while(str[i] && (str[i] == ' ' || str[i] == '\t'))
		i--;
	int end = i;
	while(str[i] && (str[i] != ' ' && str[i] != '\t'))
		i--;
	int start = ++i;
	while(start <= end)
	{
		write(1, &str[start], 1);
		start++;
	}
	write(1, "\n", 1);
}



int main(int argc, char *argv[])
{
	if(argc == 2)
		last_word(argv[1]);
	else
		write(1, "\n", 1);
}