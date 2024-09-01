#include<stdio.h>
#include<pthread.h>

int shared =5;

void *fxn1(){
	int local;
	local=shared;
	local+=1;
	sleep(5);
	shared=local;
	printf("in f1:%d\n",shared);
	pthread_exit(NULL);
}

void *fxn2(){
	int local;
	local=shared;
	local-=1;
	shared=local;
	printf("in f2:%d\n",shared);
	pthread_exit(NULL);
}

int main(){
pthread_t t1,t2;
pthread_create(&t1,NULL,fxn1,NULL);
pthread_create(&t2,NULL,fxn2,NULL);
pthread_join(t1,NULL);
pthread_join(t2,NULL);
return 0;
}
