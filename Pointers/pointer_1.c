#include <stdio.h>
#include <stdlib.h>

int* createArray(int size, int total_elements){
	int* pointer = (int*)malloc(total_elements*size);
	return pointer;
}

void take_input(int* p, int size){
	int counter = 0;
	while(counter<size){
		printf("enter Integer: ");
		scanf("%d",p+counter);
		counter++;
	}

}

int main(){
	int * p;
	p = (int*)malloc(sizeof(int));
	free(p);
	printf("Program executed\n");
	
	int k = 5;
	
	int* arr = createArray(sizeof(int), k);
	if (arr == NULL){
		printf("Memory not allocated");
	}
	else {
		printf("%p is the address of arr\n",&arr);
	
	}
	free(arr);
        
	int* pointer = createArray(sizeof(int),k);

	take_input(pointer, k);
	
	int counter = 0; 
	while(counter < k){
		printf("%d\n",pointer[counter]);
		counter++;
	}
	
}



