#include<stdio.h>
#include<pthread.h>

void *fxn1(void* arg){
	for(int i=1;i<11;i++){
	printf("%d ",i);
}
}

void fxn2(){
int a;
scanf("%d",a);
if(a%2==0)
printf("enen\n");
else
printf("odd\n");
}

int main(){
fxn2();
//pthread_t p1,p2;

}
