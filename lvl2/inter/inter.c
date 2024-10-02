#include <unistd.h>

int check_double(char *s1, char c, int pos)
{
	int i = 0;
	if(!s1)
		return (-1);
	while(i < pos)
	{
		if(s1[i] == c)
			return(1);
		i++;
	}
	return (0);
}


void	inter(char *s1, char *s2)
{
	int i = 0;
	int j;
	int flag = 0;
	if(!s1 || !s2)
		return ;
	while(s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if(s1[i] == s2[j])
			{
				if(check_double(s1, s2[j], i) == 0)
					write(1, &s1[i], 1);
				break;
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	
}


int main(int argc, char *argv[])
{
	if(argc == 3)
		inter(argv[1], argv[2]);
	else
		write(1, "\n", 1);
}