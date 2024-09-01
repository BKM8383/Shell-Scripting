#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
char buf[1];
int a=open("output.txt",O_RDONLY,0777);
int b=open("input.txt",O_WRONLY | O_CREAT,0777);
while(read(a,buf,1)!=0){
	write(b,buf,1);
}
}
