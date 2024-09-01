#include<stdio.h>
#include<pthread.h>

struct st{
char *s1;
char *s2;
};

void *func(void * a){
struct st *x=(struct st*)a;
printf("%s %s",(char *)x->s1,(char *)x->s2);
return NULL;
}

int main(){
struct st s;
s.s1="hello ";
s.s2="world "; 
pthread_t t1;
pthread_create(&t1,NULL,func,&s);
pthread_join(t1,NULL);

}
