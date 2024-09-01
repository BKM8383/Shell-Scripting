#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
int main(){
int count =0;
	int a=getpid();
	for(int i=0;i<5;i++){
	a=fork();
	if(a==0){
	count++;}
	if(a!=0)
	printf("%d\n",count);
	}
}
