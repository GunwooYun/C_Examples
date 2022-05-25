#include<stdio.h>
#include<stdlib.h>

typedef struct _Node{
	int data;
	struct _Node * next;
}Node;

Node * head; // declare head

int reverseFlag = 0; // Check list is reversed or not

Node* getNode()
{
	return (Node *)malloc(sizeof(Node));
}

void insertNode()
{
	int data;
	printf("Enter data : ");
	scanf("%d", &data);

	Node * newNode = getNode();
	if(newNode == NULL){
		printf("Error malloc\n");
		exit(1);
	}

	newNode->data = data;
	newNode->next = NULL;

	// There is no node
	if(head == NULL){
		head = newNode;	
	}
	// Node exists
	else{
		Node* ptr = head;
		while(ptr->next != NULL){
			ptr = ptr->next;
		}
		ptr->next = newNode;
	}
}

Node * searchPreNode(int data)
{
	if(head == NULL){
		printf("No node\n");
		return NULL;
	}
	
	Node * ptr = head;
	Node * pre = head;

	while(ptr != NULL)
	{
		if(ptr->data == data) return pre;
		pre = ptr;
		ptr = ptr->next;
	}
	return NULL;

}

void deleteNode()
{
	int data;
	Node * pre = head;
	Node * ptr = head;
	if(head == NULL){
		printf("No node\n");
		return;
	}
	printf("Enter data to be deleted : ");
	scanf("%d", &data);

	while(ptr != NULL)
	{
		if(ptr->data == data) break;
		pre = ptr;
		ptr = ptr->next;
	}
	if(ptr == NULL){
		printf("No data\n");
		return;
	}else if(ptr == head){
		head = ptr->next;
	}else{
		pre->next = ptr->next;
	}
	free(ptr);
}

void showNormal()
{
	Node* ptr = head;
	if(ptr == NULL){
		printf("There is no node\n");
		return;
	}
	else{
		while(ptr != NULL){
		printf("%d ", ptr->data);
		ptr = ptr->next;
		}
	printf("\n");
	}
}

void listReverse()
{
	Node * pre = NULL;
	Node * ptr = head; 
	Node * tmp;

	while(ptr != NULL){
		tmp = ptr->next;
		ptr->next = pre;
		pre = ptr;
		ptr = tmp;
	}
	head = pre;
}

void showMenu()
{
	int showMenu;
	do{
		printf("Choose show menu 1)Normal 2)Reverse : ");
		scanf("%d", &showMenu);
	}while(showMenu > 2 && showMenu < 1);

	switch(showMenu)
	{
		case 1 :
			if(reverseFlag == 0){
				showNormal();
			}
			else if(reverseFlag == 1){
				listReverse();
				showNormal();
				reverseFlag = 0;
			}
			break;
		case 2 :
			if(reverseFlag == 0){
				listReverse();
				showNormal();
				reverseFlag = 1;
			}
			else if(reverseFlag == 1){
				showNormal();
			}
			break;
		default :
			break;
	}
}

void menuFunc()
{
	int menu;
	printf("Choose menu 1)Insert 2)Delete 3)Show : ");
	scanf("%d", &menu);

	if(menu < 1 && menu > 3) return;

	switch(menu)
	{
		case 1 :
			insertNode();
			break;
		case 2 :
			deleteNode();
			break;
		case 3 :
			showMenu();
			break;
		default :
			break;
	}
}

int main()
{

	while(1)
	{
		menuFunc();
	}


	return 0;
}
