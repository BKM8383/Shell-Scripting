#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
	char buf[1];
	int a=open("sample.txt",O_RDONLY,0777);
	int b=0;
	while(read(a,buf,1)!=0){
	b++;
}
	lseek(a,b-6,SEEK_SET);
	while(read(a,buf,1)!=0){
	printf("%c",*buf);
}
}
