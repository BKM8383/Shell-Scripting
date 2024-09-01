#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
int a=open("output.txt",O_WRONLY | O_CREAT,0777);
write(a,"hello world!",12);
close(a);
}
