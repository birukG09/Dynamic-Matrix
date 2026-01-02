#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    int top;
    unsigned capacity;
    int* array;
} Stack;

Stack* createStack(unsigned capacity) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

void push(Stack* stack, int item) {
    if (stack->top == stack->capacity - 1) return;
    stack->array[++stack->top] = item;
}

int pop(Stack* stack) {
    if (stack->top == -1) return -1;
    return stack->array[stack->top--];
}

int main() {
    Stack* stack = createStack(100);
    push(stack, 10);
    push(stack, 20);
    printf("%d popped from stack\n", pop(stack));
    return 0;
}
