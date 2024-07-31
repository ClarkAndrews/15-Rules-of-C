#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void clearBuffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}
int main() {
  int randNum = rand(), answer, max = 500, min = 1, tries = 0;
  srand(time(NULL));
  randNum = rand() % (max - min + 1) + min; 
  while(answer != randNum) {
    tries++;
    printf("Guess the Int :");
    // returns 1 if integer is passed 
    if(scanf("%d", &answer) != 1) {
      clearBuffer();  
      printf("Your input is not a valid number :(\n");
      tries--;  
      continue;
    }
    if(answer > randNum) {
      printf("you need to go lower :)\n");
    } else if(answer < randNum) {
      printf("you need to go higher :)\n");
    } else{
      printf("CONGRATULATIONS!!!\n");
      printf("it took you %d tries to guess the number!\n", tries);
    }
  }
}