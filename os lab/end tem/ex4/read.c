#include<stdio.h>
#include<dirent.h>

int main(){
DIR *dp=opendir("dir");
struct dirent *dptr;
while((dptr=readdir(dp))!=NULL){
	if(dptr->d_type==4){
	printf("file     	");
}
else{
printf("Directory	");
}
	printf("%s \n",dptr->d_name);
}
}
