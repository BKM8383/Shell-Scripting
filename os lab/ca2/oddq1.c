#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
char a='1';
char b='\n';
int x=("input.txt",O_WRONLY,0777);
for(int i=0;i<100;i++){
write(x,&a,1);
write(x,&b,1);
}
}
