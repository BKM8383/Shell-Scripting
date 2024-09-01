#include<stdio.h>
#include<pthread.h>

int shared =5;
pthread_mutex_t m1;

void *fxn1(){
	int local;
	pthread_mutex_lock(&m1);
	local=shared;
	local+=1;
	sleep(5);
	shared=local;
	pthread_mutex_unlock(&m1);
	printf("in f1:%d\n",shared);
	pthread_exit(NULL);
}

void *fxn2(){
	int local;
	pthread_mutex_lock(&m1);
	local=shared;
	local-=1;
	shared=local;
	pthread_mutex_unlock(&m1);
	printf("in f2:%d\n",shared);
	pthread_exit(NULL);
}

int main(){
pthread_t t1,t2;
pthread_mutex_init(&m1,NULL);
pthread_create(&t1,NULL,fxn1,NULL);
pthread_create(&t2,NULL,fxn2,NULL);
pthread_join(t1,NULL);
pthread_join(t2,NULL);
pthread_mutex_destroy(&m1);
return 0;
}
