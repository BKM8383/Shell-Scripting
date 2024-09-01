#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
pthread_mutex_t m;
int global=10;

void *f1(){
pthread_mutex_lock(&m);
sleep(1);
global++;
printf("%d",global);
pthread_mutex_unlock(&m);
}

void *f2(){
pthread_mutex_lock(&m);
global--;
printf("%d",global);
pthread_mutex_unlock(&m);
}

int main(){
pthread_mutex_init(&m,NULL);
pthread_t p1,p2;
pthread_create(&p1,NULL,f1,NULL);
pthread_create(&p2,NULL,f2,NULL);
pthread_join(p1,NULL);
pthread_join(p2,NULL);
pthread_mutex_destroy(&m);
}
