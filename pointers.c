# include <stdio.h>

void core_utils_func(int core_utilization[]) {

  printf("sizeof core_utilization in core_utils_func: %zu\n", sizeof(core_utilization));
}

/// @brief Playground for pointers and structs in C.
/// @return none
int main() {

    printf("testing pointers and struct to get a feel for how they work.\n");

    int number_of_adam_sandler_movies = 70;

    printf("number of adam sandler movies: %d\n", number_of_adam_sandler_movies);

    // holds the address
    int *pointer = &number_of_adam_sandler_movies;

    printf("pointer: %p\n", (void*)pointer);

    // holds the value at the address
    int value_at_pointer = *pointer;

    printf("value at pointer: %d\n", value_at_pointer);

    printf("\n\n");

    printf("declare int array");

    int numbers[5] = {1, 2, 3, 4, 5};

    int *numbers_ptr = numbers; // points to the first element of the array

    // Access the third element (index 2)
    int value = numbers[2];

    printf("value at index 2: %d\n", value);

 
    // same as above but using pointer arithmetic
    int value_via_pointer = *(numbers_ptr + 2);

    printf("value at index 2 via pointer: %d\n", value_via_pointer);

    int *p = numbers + 2;  // p points to the third element
    
    printf("pointer p: %p\n", (void*)p);
    
    int value2 = *p;        // value is 3

    printf("value at pointer p: %d\n", value2);

    // example of a 32 bit mem address
    int *intPtr;
    char *charPtr;
    double *doublePtr;
    printf("Size of int pointer: %zu bytes\n", sizeof(intPtr));
    printf("Size of char pointer: %zu bytes\n", sizeof(charPtr));
    printf("Size of double pointer: %zu bytes\n", sizeof(doublePtr));
    // Size of int pointer: 4 bytes
    // Size of char pointer: 4 bytes
    // Size of double pointer: 4 bytes

    // array sizes
    int intArray[10];
    char charArray[10];
    double doubleArray[10];
    printf("Size of int array: %zu bytes\n", sizeof(intArray));
    printf("Size of char array: %zu bytes\n", sizeof(charArray));
    printf("Size of double array: %zu bytes\n", sizeof(doubleArray));
    // Size of int array: 40 bytes
    // Size of char array: 10 bytes
    // Size of double array: 80 bytes

    // array decay
    int arr[5];
    printf("array arr: %p\n", (void*)arr);

    // 'arr' decays to 'int*' because that's the type of 'ptr'
    int *ptr = arr;
    printf("pointer ptr: %p\n", (void*)ptr);

    // 'arr' decays to 'int*' to perform pointer arithmetic
    int value3 = *(arr + 2);
    printf("value at index 2 of arr: %d\n", value3);

    // another example of array decay
    int core_utilization[] = {43, 67, 89, 92, 71, 43, 56, 12};
    int len = sizeof(core_utilization) / sizeof(core_utilization[0]);
    printf("sizeof core_utilization in main: %zu\n", sizeof(core_utilization));
    printf("len of core_utilization: %d\n", len);
    core_utils_func(core_utilization);

    return 0; // all good
}

