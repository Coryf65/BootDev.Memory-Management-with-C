#include <stdio.h>
#include <stdlib.h>

// take a pointer to a pointer and swap the address
// we know the size of the data types so this makes it easy
void swap_strings(char **a, char **b) {
    printf("swapping!!\n");
    char *temp = *a;

    *a = *b;
    *b = temp;
}


int main()
{
    printf("showing a way to swap values from two strings, we take two pointers and swap which values they have\n");

    char *a = "Hello";
    char *b = "Goodbye";

    printf("a is '%s'\n", a);
    printf("b is '%s'\n", b);

    swap_strings(&a, &b);

    printf("a is now '%s'\n", a);
    printf("b is now '%s'\n", b);

    printf("done!\n");
    return 0;
}