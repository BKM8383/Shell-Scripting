#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
int a,b,c,d;
char buf[100];

a=open("sample.txt",O_WRONLY|O_APPEND);
b=read(0,buf,50);
c=write(a,buf,b);
close(a);
a=open("sample.txt",O_RDONLY);
read(a,buf,100);
buf[100]="\0";
printf("%s",buf);
}
