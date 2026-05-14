#include <stdio.h>
#include <stdlib.h>

typedef enum SnekObjectKind {
  INTEGER,
  FLOAT,
  BOOL,
} snek_object_kind_t;

typedef struct SnekInt {
  char *name;
  int value;
} snek_int_t;

typedef struct SnekFloat {
  char *name;
  long _pad;
  float value;
} snek_float_t;

typedef struct SnekBool {
  char *name;
  long _pad;
  unsigned int value;
} snek_bool_t;


void snek_zero_out(void *pointer, snek_object_kind_t kind)
{
    if(kind == INTEGER)
    {
        snek_int_t *obj = (snek_int_t *)pointer;
        obj->value = 0;
    }

    if(kind == FLOAT)
    {
        snek_float_t *obj = (snek_float_t *)pointer;
        obj->value = 0.0;
    }

    if(kind == BOOL)
    {
        snek_bool_t *obj = (snek_bool_t *)pointer;
        obj->value = 0;
    }
}

int main()
{
    printf("a simple example of a use of `void*`\n");
    snek_int_t integer;
    snek_float_t float_num;
    snek_bool_t boolean;

    integer.value = -100;
    float_num.value = -99.99;
    boolean.value = 255;

    snek_zero_out(&integer, INTEGER);
    snek_zero_out(&float_num, FLOAT);
    snek_zero_out(&boolean, BOOL);

    if (integer.value != 0)
    {
        printf("Integer should be zeroed out to 0\n");
    }

    if (float_num.value != 0.00)
    {
        printf("Float should be zeroed out to 0.00\n");
    }

    if (boolean.value != 0)
    {
        printf("Boolean should be zeroed out to 0\n");
    }

    printf("done!\n");

    return 0;
}