#include<stdio.h>
#include<pthread.h>

void *func(void *a){
printf("%s",(char *)a);
}

int main(){
char *a="hello",*b=" bkm";
pthread_t t1,t2;
int x,y;
x=pthread_create(&t1,NULL,func,(void*) a);
y=pthread_create(&t2,NULL,func,(void*) b);
pthread_join(t1,NULL);
pthread_join(t2,NULL);

}
