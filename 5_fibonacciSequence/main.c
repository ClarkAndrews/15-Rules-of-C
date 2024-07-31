#include <stdio.h>

void fibbonaciSequence(int count) {
  int num1 = 0,num2 = 1, i, result = 0;
  for(i = 0; i < count; i++) {
    result = num1 + num2;
    printf("%d\n",result);
    num1 = num2;
    num2 = result; 
  }

}

int main() {
  fibbonaciSequence(30);
  return 0;
}