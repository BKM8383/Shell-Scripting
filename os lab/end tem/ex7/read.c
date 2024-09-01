#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
int a=open("sample.txt",O_RDONLY,0777);
char buf[1];
int count=0;
while(read(a,buf,1)!=0){
	count++;
}
lseek(a,count-6,SEEK_SET);
while(read(a,buf,1)!=0){
	printf("%s",buf);
}
}
