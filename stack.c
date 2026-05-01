#include <stdio.h>

int main()
{
    printf("Creatig the stack frames and releasing them:\n");
    printMessageOne();
    printMessageTwo();
    printMessageThree();

    printf("\nNow with more functions in between:\n\n");
    printMessageOne2Two();
    printf("shows the allocation growing...\n");

    return 0;
}

__attribute__((noinline)) void printMessageOne(void)
{
    const char *message = "Dark mode?\n";
    printStackPointerDiff();
    printf("%s\n", message);
}

__attribute__((noinline)) void printMessageTwo(void)
{
    const char *message = "more like...\n";
    printStackPointerDiff();
    printf("%s\n", message);
}

__attribute__((noinline)) void printMessageThree(void)
{
    const char *message = "Dark Roast.\n";
    printStackPointerDiff();
    printf("%s\n", message);
}


__attribute__((noinline)) void printMessageOne2Two(void)
{
    const char *message = "Dark mode?\n";
    printStackPointerDiff();
    printf("%s\n", message);
    printMessageTwo2Three();
}

__attribute__((noinline)) void printMessageTwo2Three(void)
{
    const char *message = "more like...\n";
    printStackPointerDiff();
    printf("%s\n", message);
    printMessageThree();
}

void printStackPointerDiff(void) {
  static void *last_sp = NULL;
  void *current_sp;
  current_sp = __builtin_frame_address(0);
  long diff;
  if (last_sp == NULL) {
    last_sp = current_sp;
    diff = 0;
  } else {
    diff = (char *)last_sp - (char *)current_sp;
  }
  printf("---------------------------------\n");
  printf("Stack pointer offset: %ld bytes\n", diff);
  printf("---------------------------------\n");
}