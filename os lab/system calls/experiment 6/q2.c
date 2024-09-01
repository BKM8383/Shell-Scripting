#include<stdio.h>
#include<pthread.h>
#include<stdbool.h>

void *func(char *a){
char c=(char)a[0];
int i=0,count=0;
while(true){
	if(c=='\0'){
	break;
	}
	count++;
	i++;
	c=(char)a[i];
}
return count;
}

int main(){
char *a="hello kmnasdfasdf safasf";
pthread_t t1;
pthread_create(&t1,NULL,&func,(void *)a);
void* result;
pthread_join(t1,&result);
printf("%d ",(int)result);
}
