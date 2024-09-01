#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
int fd[2];
pipe(fd);
pid_t a;
a=fork();

if(a==0){
	close(fd[1]);
	int  result;
	read(fd[0],&result,sizeof(result));
	close(fd[0]);
	printf("%d",result);
}
else if(a>0){
	close(fd[0]);
	int sum=5+10;
	write(fd[1],&sum,sizeof(sum));
	close(fd[1]);
}
}
