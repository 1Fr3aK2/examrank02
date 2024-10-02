#include <unistd.h>

void ulstr(char *str)
{
	int i = 0;
	if(!str)
		return ;
	while(*str)
	{
		if(*str >= 'a' && *str <= 'z')
			*str -= 32;
		else if(*str >= 'A' && *str <= 'Z')
			*str += 32;
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}


int main(int argc, char *argv[])
{
	if(argc == 2)
		ulstr(argv[1]);
	else 
		write(1, "\n", 1);
}