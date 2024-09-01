#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>

int main(){
int pid=getpid();
printf("current process id = %d \n",getpid());
pid=fork();
if(pid==0){
	printf("child process is sleeping \n");
	sleep(10);
	printf("orphan child process id = %d \n",getppid());
}
else{
printf("parent process completed\n");
}
}
