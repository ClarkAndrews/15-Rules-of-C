#include <stdio.h>
#include <string.h>
void reverseString(char *string); 
int main() {
  char string[100] = "Thats a string as you can see";
  printf("original string: %s\n", string);
  reverseString(string);
  printf("reversed string: %s\n", string);
  reverseString(string);
  printf("back to original: %s\n", string);
  return 0; 
}
void reverseString(char* string) {
  int len = strlen(string), i, k;
  char temp;
  for (i = 0, k = len -1; i < k; i++, k --) {
    temp = string[i];
    string[i] = string[k];
    string[k] = temp; 
  }
  printf("----------------------------------------------\n");
}