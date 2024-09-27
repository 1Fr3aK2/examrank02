#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
    int i = 0;
    int *result;
    int range = abs(end - start) + 1;
    result = (int *)malloc(range * sizeof(int));
    if(!result)
        return(NULL);
    while(i < range)
    {
        if(start < end)
        {
            result[i] = start + i;
            i++;   
        }
        else
        {
            result[i] = start - i;
            i++;
        }
    }
    return (result);
}

/* int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Uso: %s <start> <end>\n", argv[0]);
        return (1);
    }

    int start = atoi(argv[1]);
    int end = atoi(argv[2]);
    int *array;
    int i;

    array = ft_range(start, end);
    
    if (array == NULL)
    {
        printf("Falha na alocação de memória.\n");
        return (1);
    }

    printf("Números entre %d e %d:\n", start, end);
    for (i = 0; i <= abs(end - start); i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    return (0);
} */