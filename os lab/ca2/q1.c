#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
char buf[10];
int count=0;
char x;
int a=open("input.txt",O_RDONLY,0777);
while(read(a,&x,1)>0){
	count++;
}
int pos=count-10;
lseek(a,pos,SEEK_SET);
read(a,buf,10);
buf[10]='\0';
write(0,buf,10);
}
