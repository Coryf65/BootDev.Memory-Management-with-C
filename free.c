#include <stdio.h>
#include <stdlib.h>

int *allocate_scalar_list(int size, int multiplier)
{
    int *result = malloc(size * sizeof(int));

    if (result == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < size; i++)
    {
        result[i] = i * multiplier;
    }

    return result;
    
}

int main()
{
    const int num_lists = 500;

    for (int i = 0; i < num_lists; i++)
    {
        int *list = allocate_scalar_list(50000, 2);

        if (list == NULL)
        {
            printf("Failed to allocate list\n");
            return 1;
        } else
        {
            printf("Allocated list %d\n", i);
            free(list); // free as soon as we are done with it
        }        
    }    

    return 0;
}