#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<sys/types.h>


int main() {

    pid_t child;
    child = fork();
    
    if (child == 0) {
    	printf("\n\nInside Child\n");
        printf("Child Process ID: %d\nParent ID: %d\n", getpid(), getppid());} 
    
    else {
    	printf("Inside parent\n");
        printf("Parent Process ID: %d\nChild ID: %d\n", 		getpid(), child);}}
