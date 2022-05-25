#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
	struct node * l_link;
	char data[4];
	struct node * r_link;
}Node;

typedef struct{
	struct node * head;
}List;

List * createList(){
	List * list = (List *)malloc(sizeof(List));
	if(list == NULL){
		printf("malloc list failed\n");
		exit(1);
	}
	list->head = NULL;
	return list;
}

void insertNode(List * L, char * d){
	Node * ptr = L->head;
	Node * newNode = (Node *)malloc(sizeof(Node));
	if(newNode == NULL){
		printf("failed malloc\n");
		exit(1);
	}
	strcpy(newNode->data, d);
	// empty list
	if(L->head == NULL)  {
		newNode->l_link = NULL;
		newNode->r_link = NULL;
		L->head = newNode;
	}
	else{
		while(ptr->r_link != NULL){
			ptr = ptr->r_link;
		}
		ptr->r_link = newNode;
		newNode->l_link = ptr;
		newNode->r_link = NULL;
	}
}

Node * searchNode(List * L, char * d){
	Node * ptr = L->head;
	if(ptr == NULL){
		printf("Empty list\n");
		return NULL;
	}
	while(ptr != NULL){
		if(strcmp(ptr->data, d) == 0) return ptr;
		ptr = ptr->r_link;
	}
	return NULL;  
}

void deleteNode(List * L, Node * dn){

	if(L == NULL || dn == NULL) return;
	//Node * ptr = L->head;
	//printf("test : %s\n", dn->data);
	// first node
	if(dn->l_link == NULL){
		if(dn->r_link == NULL) L->head = NULL;
		else{
			dn->r_link->l_link = NULL;
			L->head = dn->r_link;
		}
		//free(dn);
	}

	// middle node
	else if(dn->r_link != NULL){
		dn->l_link->r_link = dn->r_link;
		dn->r_link->l_link = dn->l_link;
		//free(dn);
	}
	// last node
	else{
		dn->l_link->r_link = NULL;
	}
	free(dn);
}

void printList(List * L){
	Node * ptr = L->head;
	if(ptr == NULL){
		printf("Empty list\n");
		return;
	}
	else{
		printf("\nList=>[");
		while(ptr != NULL){
			printf("%s ", ptr->data);
			ptr = ptr->r_link;
		}
		printf("]\n");

	}

}


int main(void) {
	//printf("Hello World\n");

	List * list = createList();
	insertNode(list, "월");
	insertNode(list, "화");
	insertNode(list, "수");
	printList(list);
	deleteNode(list, searchNode(list, "화"));
	printList(list);
	insertNode(list, "목");
	insertNode(list, "금");
	printList(list);
	deleteNode(list, searchNode(list, "월"));
	deleteNode(list, searchNode(list, "금"));
	printList(list);


	return 0;
}
