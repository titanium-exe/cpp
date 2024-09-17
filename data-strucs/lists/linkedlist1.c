#include <stdlib.h>
#include <stdio.h>

struc Node{
	int data;
	struct Node* next
}

struct Node* head; // global variable
void insert(int x);
void print();

int main() 
	head = NULL; // empty list 
	int n, i, x;
	print("Length of the linked list: ");
	scanf("%d", &n);
	for(i =0; i < n; i++){
		printf("enter the number: \n");
		scanf("%d", &x);
		insert(x);
		print();
	}
}


