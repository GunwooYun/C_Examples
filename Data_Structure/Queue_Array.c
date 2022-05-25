#include <stdio.h>
#define QUEUE_SIZE 100

int queue[QUEUE_SIZE];

int front = -1;
int rear = -1;

int isQueueFull(){
	if(rear == QUEUE_SIZE - 1){
		printf("queue is full\n");
		return 1;
	}
	else return 0;
}

int isQueueEmpty(){
	if(front == rear){
		printf("queue is empty\n");
		return 1;
	}
	else return 0;
}

void enqueue(int data){
	if(isQueueFull()){
		return;
	}
	else
		queue[++rear] = data;
}

int dequeue(){
	if(isQueueEmpty()){
		return -1;
	}
	else
		return queue[++front];

}

void printQueue(){
	if(isQueueEmpty()) return;
	else{
		for(int i = front+1; i <= rear; i++)
			printf("%d ", queue[i]);
	}
	printf("\n");
}



int main(void) {
	//printf("Hello World\n");
	int data;

	enqueue(1);
	enqueue(2);
	enqueue(4);
	enqueue(6);
	enqueue(10);
	printQueue();
	data = dequeue();
	printf("dequeue : %d\n", data);
	data = dequeue();
	printf("dequeue : %d\n", data);
	data = dequeue();
	printf("dequeue : %d\n", data);
	data = dequeue();
	printf("dequeue : %d\n", data);
	data = dequeue();
	printf("dequeue : %d\n", data);
	data = dequeue();
	printf("dequeue : %d\n", data);

	printQueue();

	return 0;
}
