#include <stdio.h>
#include <stdlib.h>

char *get_full_greeting(char *greeting, char *name, int size)
{
    char *full_greeting = malloc(size * sizeof(char)); // good general pattern for allocating memory for a string
    snprintf(full_greeting, size, "%s, %s!", greeting, name);
    return full_greeting;
}

int is_on_stack(char *ptr)
{
    // This is a very naive check and not reliable in general.
    // It assumes that the stack grows downwards and that the heap grows upwards.
    // In practice, this can vary based on the system and compiler.
    return (ptr > (char *)&ptr);
}

int main()
{

        char *result = get_full_greeting("Hello", "Alice", 50);
        printf("%s\n", result);
        printf("is on stack?\n", is_on_stack(result) == 1 ? "true" : "false");
        free(result);

    return 0;
}