#include <stdio.h>

typedef enum {
    BIG = 1231516548121,
    BIGGER,
    BIGGEST,
} BigNumbers;


typedef enum {
    HTTP_BAD_REQUEST = 400,
    HTTP_UNAUTHORIZED = 401,
    HTTP_NOT_FOUND = 404,
    HTTP_TEAPOT = 418,
    HTTP_INTERNAL_SERVER_ERROR = 500,
} HttpErrorCode;


int main(int argc, char const *argv[])
{
    printf("C will always try to shove the data into the smallest type it can\n");
    
    printf("The size of BigNumbers is %zu bytes\n", sizeof(BigNumbers));
    printf("The size of HttpErrorCode is %zu bytes\n", sizeof(HttpErrorCode));
    
    return 0;
}