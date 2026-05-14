#include <stdio.h>
#include <stdlib.h>

void swap_ints(int *a, int *b)
{
    printf("swapping!!\n");
    int temp = *a;

    *a = *b;
    *b = temp;
}


int main()
{
    printf("showing a way to swap values from two ints, we take two pointers and swap which values they have\n");    

    int value_1 = 100;
    int value_2 = 202;

    printf("starting with ints value_1: %d and value_2: %d\n", value_1, value_2);

    printf(" : %d\n", value_1);
    printf("void * &: %p\n", (void *)&value_1);
    printf("&: %p\n", &value_1); 
    printf("note using the wrong format specifier for the address can cause undefined behavior, like below\n");
    printf("using `d` when `p` is used for pointers: %d\n", &value_1); 

    swap_ints(&value_1, &value_2);

    printf("now we have value_1: %d and value_2: %d\n", value_1, value_2);

    printf("done!\n");
    return 0;
}