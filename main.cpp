#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define STACK_SIZE 5

typedef struct{
  int array[STACK_SIZE];
  int top1;
  int top2;
} doublestack;

void initialize_s1(doublestack * stack){
  //Set tops
  stack->top1 = -1;
  stack->top2 = STACK_SIZE;
}

void initialize_s2(doublestack * stack){
  //Do the same as in s1
  initialize_s1(stack);
}

bool is_empty_s1(doublestack * stack){
  //If top == -1, stack is empty
  return stack->top1 == -1;
}

bool is_empty_s2(doublestack * stack){
  //If top == STACK_SIZE, stack is empty
  return stack->top2 == STACK_SIZE;
}

bool is_full_s1(doublestack * stack){
  //If tops are next to each other, stack is full
  return stack->top1+1 == stack->top2;
}

bool is_full_s2(doublestack * stack){
  //If tops are next to each other, stack is full
  return stack->top2-1 == stack->top1;
}

void push_s1(doublestack * stack, int value){
  //Increase top and set value
  stack->array[++stack->top1] = value;
}

void push_s2(doublestack * stack, int value){
  //Decrease top and set value
  stack->array[--stack->top2] = value;
}

int pop_s1(doublestack * stack){
  //return value and decrease top
  return stack->array[stack->top1--];
}

int pop_s2(doublestack * stack){
  //return value and increase top
  return stack->array[stack->top2++];
}

int main(){
	
  doublestack test;
  initialize_s1(&test);
  
  push_s1(&test, 1);
  push_s1(&test, 2);
  push_s2(&test, 3);
  push_s2(&test, 4);
  
  printf("is_full_s1: %s\n", is_full_s1(&test)?"yes":"no");
  push_s2(&test, 5);
  
  printf("is_full_s1: %s\n", is_full_s1(&test)?"yes":"no");
  printf("is_empty_s1: %s\n", is_empty_s1(&test)?"yes":"no");
  printf("is_empty_s2: %s\n", is_empty_s2(&test)?"yes":"no");
  
  printf("%d %d\n", pop_s1(&test), pop_s2(&test));
  printf("%d %d\n", pop_s1(&test), pop_s2(&test));
  
  printf("is_empty_s1: %s\n", is_empty_s1(&test)?"yes":"no");
  printf("is_empty_s2: %s\n", is_empty_s2(&test)?"yes":"no");
}
