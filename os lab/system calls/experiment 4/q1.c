#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>
int main() {
	int a=mkdir("fol1",0777);
	int b=open("fol1/bkm.txt",O_CREAT | O_WRONLY);
	DIR *dp;
	dp=opendir("fol1");
	struct dirent *dptr;
	while((dptr=readdir(dp))!=NULL){
	printf("%s\n",dptr->d_name);
	}	
}

