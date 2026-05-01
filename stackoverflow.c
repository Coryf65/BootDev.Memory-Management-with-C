#include <stdio.h>

int main()
{   
    const int pool_size = 1024 * 1024 * 10; // 10 MB, we get a stack overflow which causes a segmentation fault
    char pool[pool_size]; // Allocate a large array on the stack
    pool[0] = 's';
    pool[1] = 'n';
    pool[2] = 'e';
    pool[3] = 'k';
    pool[4] = '\0';

    printf("Size of pool: %d bytes\n", pool_size);
    printf("Initial string: %s\n", pool);

    return 0;
}