#include<stdio.h>
#include<dirent.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
DIR *dp;
struct dirent *dptr;
mkdir("dir1",0777);
int a=open("dir1/apple.txt",O_CREAT ,0777);
int b=open("dir1/apple1.txt",O_CREAT ,0777);
dp=opendir("dir1");
while((dptr=readdir(dp))!=NULL){
	printf("%s\n",dptr->d_name);
}

}
