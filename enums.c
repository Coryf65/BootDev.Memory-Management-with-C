#include <stdio.h>

// This is my tests for learning about enums

typedef enum DaysOfWeek
{
    MONDAY,
    TACO_TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY,
} days_of_week_t;

typedef enum {
    HTTP_BAD_REQUEST = 400,
    HTTP_UNAUTHORIZED = 401,
    HTTP_NOT_FOUND = 404,
    HTTP_TEAPOT = 418,
    HTTP_INTERNAL_SERVER_ERROR = 500,
} HttpErrorCode;

char *http_to_string(HttpErrorCode code) {
    switch (code) {
        case HTTP_BAD_REQUEST:
            return "400 Bad Request";
        case HTTP_UNAUTHORIZED:
            return "401 Unauthorized";
        case HTTP_NOT_FOUND:
            return "404 Not Found";
        case HTTP_TEAPOT:
            return "418 I'm a teapot";
        case HTTP_INTERNAL_SERVER_ERROR:
            return "500 Internal Server Error";
        default:
            return "Unknown Error Code";
    }
}

int main(int argc, char const *argv[])
{
    days_of_week_t today = TACO_TUESDAY;

    if (today == TACO_TUESDAY)
    {
        printf("It's taco Tuesday! Time to eat some tacos!\n");
    }

    HttpErrorCode error = HTTP_NOT_FOUND;

    printf("Error: %s\n", http_to_string(error));
    
    return 0;
}