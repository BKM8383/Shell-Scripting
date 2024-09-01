#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
int a,b,c;
char buf[100];
a=open("sample.txt",O_RDONLY);
b=read(a,buf,100);
buf[100]='\0';
close(a);
a=open("sample1.txt",O_WRONLY);
write(a,buf,b);
close(a);
a=open("sample1.txt",O_RDONLY);
read(a,buf,b);
buf[b]='\0';
printf("%s",buf);
close(a);
}
