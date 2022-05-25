#include <stdio.h>
#define Q_SIZE 4

int cQueue[Q_SIZE];
/* front and rear should be zero */
/* They are supposed to be compared of full */
int front = 0;
int rear = 0;

int isEmpty(){
	if(front == rear){
		printf("queue is empty\n");
		return 1;
	}
	else return 0;
}

int isFull(){
	if((rear+1)%Q_SIZE == front){
		printf("queue is full\n");
		return 1;
	}
	else return 0;

}
void enQueue(int d){
	if(isFull()) return;
	else{
		rear = (rear + 1) % Q_SIZE;
		cQueue[rear] = d;
	}
}

int deQueue(){
	if(isEmpty()) return -1;
	else{
		front = (front + 1) % Q_SIZE;
		return cQueue[front]; 
	}
}

void printQueue(){
	if(isEmpty()) return;
	else{
		int i = front+1;
		printf("Queue => [ ");
		/*for(int i = front+1; i <= rear; i++){

			printf("%d ", cQueue[i]);
		}*/
		while(1){
			printf("%d ", cQueue[i]);
			if(i == rear) break;
			else i = (i + 1) % Q_SIZE; // mod size of array
		}
		printf("]\n");
		}
	
}
	  


int main(void) {
	  //printf("Hello World\n");
	int data = deQueue();
	enQueue(10);
	printQueue();
	enQueue(20);
	printQueue();
	enQueue(30);
	printQueue();
	enQueue(40);
	printQueue();
	data = deQueue();
	printf("dequeue data : %d\n", data);
	printQueue();
	data = deQueue();
	printf("dequeue data : %d\n", data);
	printQueue();

	  return 0;
}
