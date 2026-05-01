#include <stdio.h>

typedef union AgeOrName {
	int age;
	char *name;
} age_or_name;

int main(int argc, char const *argv[])
{
    printf("showing the use of unions\n");

    // pass in age = 35
    age_or_name cory = { .age = 35 };
    
    printf("age: %d\n", cory.age);

    // now get the value of name, which we did not set which I get seg fault, the union only holds the memory for what value it gets.
    printf("name: %s\n", cory.name);

    return 0;
}
