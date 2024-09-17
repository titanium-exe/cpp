#include <stdlib.h>
#include <stdio.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node* head;// global variable

void insert_end(int x){

	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	// this is making the first node of the linkedlist.
	newNode->data = x;
	newNode->next = NULL;
	if (head == NULL){	
		head = newNode;
	}
	else{
		struct Node* temp;
		temp = head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

void insert_begining(int x){
	
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
		insert_end(x);
		print_list();		
	}

	
}


