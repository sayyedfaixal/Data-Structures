#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int stack[MAX];
int top = -1;
void push() {
  if (top == MAX - 1) {
    printf("StackOverflow....\n");
  } else {
    int n;
    printf("Enter the number that you want to PUSH : ");
    scanf("%d", &n);
    stack[++top] = n;
  }
}
int pop() {
  if (top == -1)
    printf("StackUnderflow...\n");
  else {
    printf("Element Popped : %d\n", stack[top--]);
  }
}
void peek() {
  if (top == -1)
    printf("Sorry, StackUnderflow no elements to peek\n");
  else
    printf("Element at the top of the stack :  %d \n", stack[top]);
}

int main() {
  int choice;
  do {
    printf("1.PUSH\n");
    printf("2.POP\n");
    printf("3.PEEK\n");
    printf("4.EXIT\n");
    printf("Enter the choice : \n");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      push();
      break;
    case 2:
      pop();
      break;
    case 3:
      peek();
      break;
    case 4:
      exit(1);
    default:
      printf("Please enter the correct number...\n");
    }
  } while (1);
  return 0;
}