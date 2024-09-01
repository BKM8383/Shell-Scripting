#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
int main() {
	DIR *dp;
	struct dirent *dptr;
    int b = mkdir("DIR1",0777);
    dp=opendir("DIR1");

    while(dptr=readdir(dp)!=NULL){
    printf("%s\n",dptr->d_name);
    }
    return 0;
}

