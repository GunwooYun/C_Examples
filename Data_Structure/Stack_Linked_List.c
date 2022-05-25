#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node * next;
}Node;

Node * top = NULL;

int isStackEmpty(){

	if(top == NULL){
		printf("stack is Empty\n");
		return 1;
	}
	else return 0;
}

void push(int d){
	Node * temp = (Node *)malloc(sizeof(Node));
	temp->data = d;
	temp->next = top;
	top = temp;
}

int pop(){
	if(isStackEmpty()) return -1;

	int data = top->data;
	Node * temp = top;
	top = top->next;
	free(temp);
	return data;
}

void showStack(){
	if(isStackEmpty()) return;
	Node * tmp = top;
	printf("Stack_LInked_List ==>[ ");
	while(tmp != NULL){
		printf("%d ", tmp->data);
			tmp = tmp->next;
	}
	printf("]\n");
}
	
int main(void) {

	showStack();
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	showStack();
	printf("popped data : %d\n", pop());
	showStack();
	printf("popped data : %d\n", pop());
	showStack();
	printf("popped data : %d\n", pop());
	showStack();
	printf("popped data : %d\n", pop());
	showStack();
	push(60);
	push(70);
	push(70);
	showStack();


	return 0;
}
