#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>

int main(){
int pid=getpid();
printf("current process pid is %d",pid);
pid=fork();
if(pid==0){
printf("\nchild process id is %d \n parent id is %d\n",getpid(),getppid());}
else{
printf("\nchild didnt formed\n");
}
}
