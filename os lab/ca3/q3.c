#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
int main(){
	pid_t child;
	child = fork();
	
	if(child==0){
	int sum=0;
	for(int i=1;i<=100;i++){sum+=i;}
		
	printf("Inside child \n");
	printf("Sum of first 100 number : %d \n",sum);
	}
	
	else{
	int sum=0;
	for(int i=1;i<=1000;i++){sum+=i;}
	
	printf("Inside parent \n");
	printf("Sum of first 1000 number :%d \n",sum);
	}}

