#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
int a=mkdir("f1",0777);
int x=open("f1/bkm.txt",O_CREAT,0777);
int y=open("f1/bkm.txt",O_WRONLY,0777);
write(y,"yes did my task",16);
close(x);
close(y);
DIR *dp;
dp=opendir("f1");
struct dirent *dptr;
while((dptr=readdir(dp))!=NULL){
printf("%s \n",dptr->d_name);
}
}
