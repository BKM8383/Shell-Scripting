#include<stdio.h>
#include<pthread.h>

pthread_mutex_t m1;
int shared=10;

void *fxn1(void* arg){
pthread_mutex_lock(&m1);
shared++;
sleep(5);
pthread_mutex_unlock(&m1);
printf("%d\n",shared);
}


void *fxn2(void* arg){
pthread_mutex_lock(&m1);
shared--;
pthread_mutex_unlock(&m1);
printf("%d\n",shared);
}

int main(){
pthread_t p1,p2;
pthread_mutex_init(&m1,NULL);
pthread_create(&p1,NULL,&fxn1,NULL);
pthread_create(&p2,NULL,&fxn2,NULL);
pthread_join(p1,NULL);
pthread_join(p2,NULL);
pthread_mutex_destroy(&m1);

}
