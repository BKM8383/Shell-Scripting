#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
int fd;
char buf[15];
fd=open("sample.txt",O_RDONLY);
if(fd<0){
	perror("open");
	return 1;
}
read(fd,buf,12);
buf[12]="\0";
printf("%s",buf);
close(fd);
return 0;
}
