#include <unistd.h>
#include <stdio.h>

int		max(int* tab, unsigned int len)
{

	if(len == 0)
		return (0);
	unsigned int i = 0;
	int max = tab[i];
	while(i < len)
	{
		if(max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);

}
