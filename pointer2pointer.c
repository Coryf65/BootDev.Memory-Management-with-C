#include <stdio.h>
#include <stdlib.h>

// accept a pointer to a pointer to an int, and change that value
void allocate_int(int ** pointer_pointer, int value)
{
    int * new_pointer = malloc(sizeof(int));
    * pointer_pointer = new_pointer;
    * new_pointer = value;
}


int main()
{
    int value = 5;
    int * pointer = &value;

    allocate_int(&pointer, 20);

    if (value != 5)
    {
        printf("Should not overwrite original value!\n");
    }

    if (pointer == NULL)
    {
        printf("Should allocate a pointer\n");
    }

    if (* pointer != 20)
    {
        printf("Should assign value to pointer\n");
    }
    
    free(pointer);
    printf("done!\n");

    return 0;
}