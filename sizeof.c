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

typedef union IntOrErrorMessage {
    int data;
    char error[256];
} int_or_error_message;


int main(int argc, char const *argv[])
{
    printf("C will always try to shove the data into the smallest type it can\n");
    
    printf("The size of BigNumbers is %zu bytes\n", sizeof(BigNumbers));
    printf("The size of HttpErrorCode is %zu bytes\n", sizeof(HttpErrorCode));
    // has to store the large char size    
    printf("The size of Union IntOrError is %zu\n", sizeof(int_or_error_message));

    return 0;
}