#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
char buf[1];
int count=0;
int a=open("output.txt",O_RDONLY,0777);
while(read(a,buf,1)!=0){
	if(*buf=='\n'){
	count++;
}}
printf("%d",count);

}
