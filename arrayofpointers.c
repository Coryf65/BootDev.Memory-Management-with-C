#include <stdio.h>
#include <stdlib.h>

typedef struct Token {
  char *literal;
  int line;
  int column;
} token_t;


token_t** create_token_pointer_array(token_t* tokens, size_t count)
{
    // create an array of the correct size
    token_t** token_pointers = malloc(count * sizeof(token_t*));
    if (token_pointers == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    for (size_t i = 0; i < count; i++)
    {
        // create a new token pointer
        token_t *pointer = malloc(sizeof(token_t));
        // set the value
        token_pointers[i] = pointer;
        // copy each value over to each posiiton in the array
        // could also be written as *token_pointers[i] = tokens[i]; // same thing
        *pointer = tokens[i];
    }


    return token_pointers;
}


int main()
{

    return 0;
}