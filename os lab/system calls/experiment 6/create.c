#include<stdio.h>
#include<pthread.h>

void func(){
	printf("in thread\n");
	pthread_exit("exit\n");
}

int main(){
	pthread_t t1;
	char *result;
	printf("In main thread\n");
	pthread_create(&t1,NULL,func,NULL);
	pthread_join(t1,&result);
	printf("%s\n",result);
	return 0;
}
