#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
int a= open("input.txt",O_RDONLY);
int count=0;
char x;
while(read(a,&x,1)>0){
	if(x=='\n')
		count++;
}
close(a);
int b=open("output.txt",O_WRONLY);
write(b,count,1);
}
