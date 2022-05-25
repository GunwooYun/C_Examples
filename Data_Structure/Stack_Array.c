#include <stdio.h>

#define STACK_SIZE 100

int top = -1;

int isStackFull(void){
	if(top == STACK_SIZE - 1){
		printf("stack is full\n");
		return 1;
	}
	else return 0;
}

int isStackEmpty(void){
	if(top == -1){
		printf("stack is empty\n");
		return 1;
	}
	else return 0;
}

int push(int * s, int element){
	if(isStackFull()) return 0;
	else {
		s[++top] = element;
		return 1;
	}
}

int pop(int * s){
	if(isStackEmpty()) return 0;
	else return s[top--];
}

// show the data that the top indicate
int peek(int * s){
	if(isStackEmpty()) return 0;
	else printf("peek element : %d\n", s[top]);
}

void showStack(int * s){
	if(isStackEmpty()) return;
	else{
		printf("STACK => [ "); 
		for(int i = 0; i <= top; i++) printf("%d ", s[i]);
		printf("]\n");
	}	
}

int main(void) {
	int stack[STACK_SIZE];

	showStack(stack);
	push(stack, 1);
	push(stack, 2);
	push(stack, 3);
	push(stack, 4);
	push(stack, 5);
	showStack(stack);
	printf("pop element : %d\n", pop(stack));
	printf("pop element : %d\n", pop(stack));
	printf("pop element : %d\n", pop(stack));
	push(stack, 5);
	showStack(stack);

	return 0;
}
