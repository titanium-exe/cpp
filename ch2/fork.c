#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	pid_t pid = fork();
	if(pid >= 1){
		printf("I am a parent with pid %d and child pid: %d\n", getpid(), pid);
	}else if(pid==0){
		printf("I am a child process with parent pid %d, and my id is %d\n", getppid(),getpid());
	}else{
		perror("fork");
		exit(1);
	}

	return 0;

}

