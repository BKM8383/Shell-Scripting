#include<stdio.h>
#include<pthread.h>

struct number{
int a;
int b;
int c;
int d;
int e;
};

float *avg(void *x){
	struct number *a1=(struct number *)x;
	float f=(a1->a+a1->b+a1->c+a1->d+a1->e)/5.0;
	return f;
}

int main(){
pthread_t t1,t2,t3;
struct number s;
void *r1,*r2,*r3;
s.a=2;s.b=4;s.c=6;s.d=7;s.e=12;
pthread_create(&t1,NULL,&avg,&s);
pthread_join(t1,&r1);
printf("%f \n",(float)r1);
}
