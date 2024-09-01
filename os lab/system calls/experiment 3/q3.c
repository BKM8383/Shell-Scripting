#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
int a;
char x;
char* p=&x;
a=open("sample.txt",O_RDONLY);
while(read(a,p,1)>0){
write(1,p,1);
}
}
