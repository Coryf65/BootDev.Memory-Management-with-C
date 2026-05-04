#include <stdio.h>
#include <stdlib.h>

int *allocated_scalar_list(int size, int multiplier)
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
    int size = 5;
    int multiplier = 2;
    int expected[5];
    expected[0] = 0;
    expected[1] = 2;
    expected[2] = 4;
    expected[3] = 6;
    expected[4] = 8;

    printf("size: %d\nmultiplier: %d\n", size, multiplier);

    int *result = allocated_scalar_list(size, multiplier);

    for (int j = 0; j < size; j++)
    {
        if(result[j] == expected[j])
        {
            printf("result[%d] '%d' - pass\n", j, result[j]);
        } else
        {
            printf(":( -> uh ohhh not matching....");
        }    
    }
    // we need to free as the function created it!
    free(result);
    printf("done!\n");

    return 0;
}