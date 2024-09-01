#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
int main(){
printf("p1 process: %d\n",getpid());
int a=getpid();
a=fork();
if(a==0){
printf("p2 process: %d\n",getpid());
a=fork();
if(a==0){
printf("p3 process: %d\n",getpid());
}}}
