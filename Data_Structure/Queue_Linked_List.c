#include <stdio.h>
#include<stdlib.h>

typedef struct _node {
    int data;
    struct _node* link;
}node;

node* front = NULL;
node* rear = NULL;

void enQueue(int d) {
    node* newNode = (node*)malloc(sizeof(node));
    if (newNode == NULL) {
        printf("malloc error\n");
        exit(1);
    }
    newNode->data = d;
    newNode->link = NULL;
    if (front == NULL) {
        front = newNode;
        rear = newNode;
    }
    else {
        rear->link = newNode;
        rear = newNode;
    }
}

void deQueue() {
    node* tmp = front;
    if (front == NULL) {
        printf("queue is empty\n");
        return;
    }
    else {
        printf("deleted data : %d\n", tmp->data);
        front = tmp->link;
        if (front == NULL) rear = NULL;
        free(tmp);
    }
}

void printQueue() {
    node* ptr = front;
    if (ptr == NULL) {
        printf("Queue is empty\n");
        return;
    }
    else {
        printf("Linked List Queue : [ ");
        while (ptr != NULL) {
            printf("%d ", ptr->data);
            ptr = ptr->link;
        }
    }
    printf("]\n");
}

int main(void) {
    //printf("Hello World\n");

    enQueue(10); enQueue(20); enQueue(30); enQueue(40); enQueue(50);
    printQueue();
    deQueue(); deQueue(); deQueue(); deQueue(); deQueue();
    printQueue();
    deQueue();
    enQueue(10); enQueue(20); enQueue(30); enQueue(40); enQueue(50);
    printQueue();

    return 0;
}