#include <stdlib.h>
#include <stdio.h>

struct Node{
	int data;
	struct Node* next;
	int elementcount;
};

struct Node* head;// global variable

void insert_end(int x){

	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	// this is making the first node of the linkedlist.
	newNode->data = x;
	newNode->next = NULL;
	if (head == NULL){	
		head = newNode;
		newNode->elementcount++;
	}
	else{
		struct Node* temp;
		temp = head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newNode;
		newNode->elementcount++;
	}
}

void insert_begining(int x){
	// edge cases
	// 1) when list is empty 
	if(head == NULL){
		insert_end(x);
		return;
	}else{
		struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
		newNode->data = x;
		newNode->next = head;
		head = newNode;
		newNode->elementcount++;
	}
}

void insert_kth(int x, int k){
	int counter = 0;
	struct Node* temp = head;
	if(head == NULL){
		insert_end(x);
		return;
	}
	if(head->elementcount < k){
		insert_end(x);
		return;
	}
	while(counter < k-2){
		temp = temp->next;
		counter++;

	}

	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        
	newNode->data = x;
	newNode->next = temp->next;
	temp->next = newNode;
	newNode->elementcount++;
	return;
}

void print_list(){
	struct Node* temp = head;
	while(temp != NULL){
		printf("%d->", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main(){ 
	head = NULL; // empty list 
	int n, i, x;
	printf("Length of the linked list: ");
	scanf("%d", &n);
	for(i =0; i < n; i++){
		printf("enter the number: \n");
		scanf("%d", &x);
		insert_begining(x);
		print_list();		
	}
		
}


