#include <stdio.h>
#include <stdlib.h>

// this is very important concept, when we return a pointer for a meomory address, but the memory
// has already disappeared because the func is kicked out of stack. 

int* add_numbers(int* a, int* b){
	int* c = (int*)malloc(sizeof(int));
	*c = *b + *a;
	return c;
}

int main(){

	int a = 10;
	int b = 20;
	int* sum_address = add_numbers(&a, &b);
	printf("sum is %d\n", *sum_address);
	free(sum_address);
}
