#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>
int main(){
	DIR *dp;
	dp=opendir("my_directory");
	struct dirent *dptr;
	while((dptr=readdir(dp))!=NULL){
	printf("%s\t%d\n",dptr->d_name,dptr->d_type);
	}
}
