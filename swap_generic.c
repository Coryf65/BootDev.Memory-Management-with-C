#include <stdio.h>
#include <stdlib.h>


void swap(void *vp1, void *vp2, size_t size) {

    printf("swapping!!\n");
    // store the data temp, we do not know the size which is why we use malloc
    void *temp = malloc(size);

    // check and return error if this does not work
    if (temp == NULL) { return 1; }

    // temp = a
    memcpy(temp, vp1, size);

    // a = b
    memcpy(temp, vp1, size);
}

int main()
{
    printf("when we do not know the sizes and types we can get we then do it dynamically / on the heap / malloc\n");




    return 0;
}