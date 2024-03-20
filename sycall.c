#include<stdio.h>
#include<unistd.h>

void main(){
	pid_t p = fork();
	if(p == 0){
		printf("Child %d\n",getpid());
		printf("Parent %d\n",getppid());
	}else{
		printf("Child %d\n",p);
		printf("Parent %d\n",getpid());
	}
}
