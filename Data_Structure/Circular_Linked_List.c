#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _Node{
	char data[3];
	struct _Node * link;
}Node;

typedef struct{
	struct _Node * head;
}List;

List * createList(); // create list
Node * getNode(); // get node
void insertNode(List * L, const char * x); // insert node at last position in list
void printList(List * L); // show nodes
char* deleteNode(List * L, const char * x); // delete node


int main(void){

	List * list = createList();

	insertNode(list, "월");
	insertNode(list, "화");
	insertNode(list, "수");
	printList(list);
	deleteNode(list, "화");
	printList(list);
	deleteNode(list, "월");
	printList(list);
	deleteNode(list, "수");
	printList(list);
	return 0;
}

List * createList(){
	List * L = (List *)malloc(sizeof(List));
	if(L == NULL){
		printf("Failed to create list\n");
		exit(1);
	}
	L->head = NULL;
	return L;
}

Node * getNode(){
	Node * node = (Node *)malloc(sizeof(Node));
	if(node == NULL){
		printf("Failed to create node\n");
		exit(1);
	}
	return node;
}

void insertNode(List * L, const char * x){
	Node * newNode = getNode();
	strcpy(newNode->data, x);
	// List is empty
	if(L->head == NULL){
		L->head = newNode;
		newNode->link = L->head;
	}
	// List is not empty
	else{
		Node * ptr = L->head;
		do{
			ptr = ptr->link;
		}while(ptr->link != L->head);
		newNode->link = ptr->link;
		ptr->link = newNode;
	}
}

char* deleteNode(List * L, const char * x){
	// list is empty
	if(L->head == NULL){
		printf("list is empty\n");
		return NULL;
	}
	else{
		Node * ptr = L->head; // The ptr node indicates the first node
		Node * target = NULL;
		// Trying to find node
		do{
			if(strcmp(ptr->data, x) == 0){
				target = ptr;
				break;
			}
			ptr = ptr->link;
		}while(ptr != L->head);
		
		// No found node
		if(target == NULL){
			printf("target node is NULL\n");
			return NULL;
		}

		// Found node
		else{
			// Try to find the previous node of the target
			Node * preTarget = NULL;
			ptr = L->head;
			do{
				if(ptr->link == target){
					preTarget = ptr;
					break;
				}
				ptr = ptr->link;
			}while(ptr != L->head);

			if(preTarget == NULL){
				printf("Failed to find preTarget\n");
			}

			// The target node is first node
			if(target == L->head){
				// There is only the first node
				if(preTarget == target){
					L->head = NULL;
				}
				else{
					preTarget->link = target->link;
					L->head = target->link;
				}
				free(target);
			}
			else{
				preTarget->link = target->link;
				free(target);
			}
		}
	}
}
void printList(List * L){
	if(L->head == NULL){
		printf("list is empty\n"); return;
	}
	else{
		Node * ptr = L->head;
		do{
			printf("%s ", ptr->data);
			ptr = ptr->link;
		}while(ptr != L->head);
	}
	printf("\n");
}
