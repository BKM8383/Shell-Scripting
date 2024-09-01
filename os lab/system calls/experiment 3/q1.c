#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
int choice,a,count=0;
char buf[1];
printf("1 for first half \n2 for second half \n");
scanf("%d",&choice);
a=open("sample.txt",O_RDONLY);
if(a==-1){
perror("opem");
return 1;
}
if(choice==1){
	 while (read(a, buf, 1) > 0) {
        count++;
	}
	count=count/2;
	lseek(a,0,SEEK_SET);
	while(count>0 && read(a,buf,1)>0){
	printf("%c",buf[0]);
	count--;
}
}
else{
	while(read(a,buf,1)>0){
	count++;
	}
	count=count/2;
	lseek(a,count,SEEK_SET);
	while(count>0 && read(a,buf,1)>0){
	printf("%c",buf[0]);
	count--;
}
}
close(a);
return 0;

}
