#include <stdio.h>
#include <stdbool.h>
void clearBuffer();
char selectOperation();
void calculation(char operation);


/////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
  char operation;
  operation = selectOperation();
  calculation(operation);
}
/////////////////////////////////////////////////////////////////////////////////////////////////


// clear inputBuffer after Scanf 
void clearBuffer() {
  char ch;
  do {
    ch = getchar();
  }while (ch != '\n' && ch != EOF);
}
// select Operation for calculation (+, -, / or *)
char selectOperation() {
  char operation;
  bool finished = false;
  while(!finished) {
    printf("Select operation(+, -, / or *): ");
    scanf("%1c", &operation);
    clearBuffer();
    if (operation == '+') {
      printf("Addition(+) selected!\n");
      finished = true; 
    } else if(operation == '-') {
      printf("Subtraction(-) selected!\n");
      finished = true; 
    } else if (operation == '/') {
      printf("Division(/) selected!\n");
      finished = true; 
    } else if (operation == '*') {
      printf("Multiplication(*) selected!\n");
      finished = true; 
    } else {
      printf("NO VALID OPERATION ENTER AGAIN\n");
      printf("*******************************\n");
    }
  }
  return operation;
}


// calculate N numbers based on selected operation
void calculation(char operation) {
  int count, i; 
  double result; 
  printf("How many Integers do you want to calculate? ");
  scanf("%d",&count);
  int nums[count];
  for( i = 0; i < count; i++) {
    printf("enter number %d: ", i + 1);
    scanf("%d", &nums[i]);  
  }
  printf("result: \n");
  result = nums[i];
  for( i = 0; i < count; i++) {
          if (operation == '+') {
        result = result + nums[i];
      } else if(operation == '-') {
        result = result - nums[i];
      } else if (operation == '/') {
        result = result / nums[i];
      } else if (operation == '*') {
        result = result * nums[i];
      } else {
        printf("NO VALID OPERATION ENTER AGAIN\n");
        printf("*******************************\n");
    }
    printf(" %d %c", nums[i], operation);
    }
    printf(" = %.2f\n", result);
  }
 
 