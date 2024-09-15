#include <stdio.h>
#include <stdlib.h>

// function callbacks

// Function that takes func pointer

void execute_callback(int(*func_ptr)(int,int), int x , int y){
	int result = func_ptr(x,y);
	printf("result is: %d\n", result);
}

// Func that will be passed as a callback
int multiply(int a, int b){
	return a*b;
}

int main(){

	execute_callback(multiply, 6,8);
	return 0;
}
