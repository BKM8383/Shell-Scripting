#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
int n,m;
char buf[100];
n=write(1,"Hello world",11);
m=read(0,buf,20);
printf("%d",m);
return 0;
}
