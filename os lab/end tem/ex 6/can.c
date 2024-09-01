#include<stdio.h>
#include<pthread.h>

struct a{
char s1[100];
char s2[100];
};

void *fxn(void *x){
	struct a *a1=(struct a*)x;
	printf("%s %s",a1->s1,a1->s2);
}
int main(){
pthread_t p1;
struct a a1;
scanf("%s",a1.s1);
scanf("%s",a1.s2);
pthread_create(&p1,NULL,*fxn, &a1);
pthread_join(p1,NULL);
}
