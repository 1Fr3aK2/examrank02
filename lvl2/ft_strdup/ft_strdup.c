#include <stdlib.h>
#include <unistd.h>
#include <unistd.h>

char    *ft_strdup(char *src)
{
	int i = 0;
	int len = 0;
	if(!src)
		return (NULL);
	while(src[i])
	{
		len++;
		i++;
	}
	i = 0;
	char *result;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if(!result)
		return (NULL);
	while(src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}