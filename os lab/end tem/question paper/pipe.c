#include<stdio.h>

int main(){
	FILE *p;
	char buf[20];
	p=popen("echo 'hello pipe'","r");
	if(p!=NULL){
	fread(buf,sizeof(char),sizeof(buf),p);
	printf("%s",buf);
	pclose(p);
}
else{
	printf("error");
}
}
