#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
	int a=open("sample.txt",O_WRONLY,0777);
	lseek(a,5,SEEK_SET);
	write(a,"Hello",5);
}
