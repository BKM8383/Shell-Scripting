#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
int shared =5;
sem_t s;

void *fxn1(){
	int local;
	sem_wait(&s);
	local=shared;
	local+=1;
	sleep(5);
	shared=local;
	sem_post(&s);
	printf("in f1:%d\n",shared);
	pthread_exit(NULL);
}

void *fxn2(){
	int local;
	sem_wait(&s);
	local=shared;
	local-=1;
	shared=local;
	sem_post(&s);
	printf("in f2:%d\n",shared);
	pthread_exit(NULL);
}

int main(){
pthread_t t1,t2;
sem_init(&s,0,1);
pthread_create(&t1,NULL,fxn1,NULL);
pthread_create(&t2,NULL,fxn2,NULL);
pthread_join(t1,NULL);
pthread_join(t2,NULL);
sem_destroy(&s);
return 0;
}
