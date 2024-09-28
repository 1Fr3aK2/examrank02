#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;
	while(++i < n)
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

char	**ft_split(char *str)
{
   int i= 0;
   int j = 0;
   int k = 0;
   int words = 0;
   char **result;
   while(str[i])
   {
    while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
        i++;
    if(str[i])
        words++;
    while(str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
		i++;
   }
   result = (char **)malloc(sizeof(char *) * (words + 1));
   if(!result)
		return (NULL);
	i = 0;
	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
        	i++;
		j = i;
		while(str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
		i++;
		if(i > j)
		{
			result[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(result[k++], &str[j], i - j);
		}
	}
	result[k] = '\0';
	return(result);
}

int main(int argc, char *argv[])
{
	if (argc != 2)  
	{
		printf("Uso: ./a.out <string>\n");
		return (1);
	}

	char **result = ft_split(argv[1]);
	int i = 0;

	while (result[i])
	{
		printf("%s ", result[i]);
		i++;
	}

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);

	return (0);
}