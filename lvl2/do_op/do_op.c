#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void do_op(char *s1, char *s2, char *s3)
{
	int i = 0;
	if(!s1 || !s2 || !s3)
	{
		write(1, "\n", 1);
	}
	int nb1 = atoi(s1);
	int nb2 = atoi(s3);
	int result;
	if(*s2 == '-')
	{
		result = nb1 - nb2;
		printf("%d\n", result);
	}
	if(*s2 == '+')
	{
		result = nb1 + nb2;
		printf("%d\n", result);
	}
	if(*s2 == '*')
	{
		result = nb1 * nb2;
		printf("%d\n", result);
	}
	if(*s2 == '/')
	{
		result = nb1 / nb2;
		printf("%d\n", result);
	}
	if(*s2 == '%')
	{
		result = nb1 % nb2;
		printf("%d\n", result);
	}
}



int main(int argc, char *argv[])
{
	if(argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	else
		write(1, "\n", 1);
}