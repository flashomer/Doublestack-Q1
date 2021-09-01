#ifndef DOUBLESTACK_H
#define DOUBLESTACK_H

#include <stdbool.h>
#define STACK_SIZE 5

typedef struct{
  int array[STACK_SIZE];
  int top1;
  int top2;
} doublestack;

void initialize_s1(doublestack * stack);
void initialize_s2(doublestack * stack);

bool is_empty_s1(doublestack * stack);
bool is_empty_s2(doublestack * stack);

bool is_full_s1(doublestack * stack);
bool is_full_s2(doublestack * stack);

void push_s1(doublestack * stack, int value);
void push_s2(doublestack * stack, int value);

int pop_s1(doublestack * stack);
int pop_s2(doublestack * stack);
#endif
