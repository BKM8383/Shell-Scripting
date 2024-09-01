#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
int a;
char x;
char* ptr=&x;
scanf("%c",&x);
a=open("sample1.txt",O_WRONLY);
while(x!='$'){
	write(a,ptr,1);
	scanf("%c",&x);
}
close(a);
return 0;
}
