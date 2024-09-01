#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>

int main(){
pid_t a;
a=fork();
if(a>0){
	sleep(10);
	printf("\nPID of parent %d",getpid());
}
else{
	printf("\nPID of child %d",getpid());
	exit(0);
}
}
