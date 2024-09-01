#include<stdio.h>
#include<dirent.h>

int main(){
DIR *dp;
struct dirent *dptr;

dp=opendir("dir");
while((dptr=readdir(dp))!=NULL){
	printf("%s\n",dptr->d_name);
}

}
