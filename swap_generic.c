#include <stdio.h>
#include <stdlib.h>

// swap different data between all sorts of data types
void swap(void *vp1, void *vp2, size_t size) {

    printf("swapping!!\n");
    // store the data temp, we do not know the size which is why we use malloc
    void *temp = malloc(size);

    // check and return error if this does not work
    if (temp == NULL) { return 1; }

    // temp = a
    memcpy(temp, vp1, size);

    // a = b
    memcpy(vp1, vp2, size);

    // b = temp
    memcpy(vp2, temp, size);

    // use free due to the use of malloc
    free(temp);
}

int main()
{
    printf("when we do not know the sizes and types we can get we then do it dynamically / on the heap / malloc\n\n");

    int i1 = 1234;
    int i2 = 5678;
    
    printf("works for ints like...\n");
    printf("l1 : %d\n", i1);
    printf("i2 : %d\n", i2);
    
    swap(&i1, &i2, sizeof(int));

    if (i1 != 5678)
    {
        printf("i1 should be i2's original value\n");
    }

    if (i2 != 1234)
    {
        printf("i2 should be i1's original value\n");
    }

    printf("now l1 : %d\n", i1);
    printf("now i2 : %d\n", i2);

    printf("\nThis also works with structs or strings\n");

    char *s1 = "dax";
    char *s2 = "adam";

    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);

    swap(&s1, &s2, sizeof(char *));
    
    if (s1 != "adam")
    {
        printf("s1 should be s2's original value\n");
    }

    if (s2 != "dax")
    {
        printf("s2 should be s1's original value\n");
    }

    printf("now s1 : %s\n", s1);
    printf("now s2 : %s\n", s2);

    return 0;
}