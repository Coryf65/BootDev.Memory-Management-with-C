//#include "exercise.h"
#include <stdio.h>
#include <string.h>

typedef struct {
  size_t length;
  char buffer[64];
} TextBuffer;

void concat_strings(char *str1, const char *str2) {
  const char null = '\0';
  int str1_length = strlen(str1); // 2
  int str2_length = strlen(str2); // 2

  //printf("str1_length: %i\n", str1_length);
  //printf("str2_length: %i\n", str2_length);

  // iterate over str2
  for (int i = 0; i <= str2_length; i++)
  {
    // now add each char to str1, after the end
    if (str1[str1_length+1] != null)
    {
      
    }
    str1[i+str1_length+1] = str2[i];
    
  }
  
  
}


void concat_strings(char *str1, const char *str2) {
  char *end = str1;
  while (*end != '\0') {
    end++;
  }

  while (*str2 != '\0') {
    *end = *str2;
    end++;
    str2++;
  }

  *end = '\0';
}


int smart_append(TextBuffer *dest, const char *src) {
  if (!dest || !src) {
    return 1;
  }
  const int max_buffer_size = 64;
  size_t src_len = strlen(src);
  size_t available_space = max_buffer_size - dest->length - 1;
  if (src_len > available_space) {
    strncat(dest->buffer, src, available_space);
    dest->length = max_buffer_size - 1;
    return 1;
  }
  strcat(dest->buffer, src);
  dest->length += src_len;
  return 0;
}
