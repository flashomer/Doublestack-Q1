#include "doublestack.h"

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
