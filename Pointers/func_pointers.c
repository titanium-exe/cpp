#include <stdlib.h>
#include <stdio.h>

// Function Pointers : Functions address stored. 
// Declare a pointer using the signature of func 
// later assigning the address of that func to the pointer.
// Like the code below : 

int* add(int *a, int* b){
	int* c = (int*)malloc(sizeof(int));
	*c = *a + *b;
	return c;
}

int main(){
	// declaring the func pointer
	int*(*func_ptr)(int*,int*);

	// Assigning the address 
	func_ptr = &add;
	int a = 5;
	int b = 9;
	int* result_ptr = func_ptr(&a,&b);
	printf("this is %d\n", *result_ptr);
	free(result_ptr);

	return 0;

}
