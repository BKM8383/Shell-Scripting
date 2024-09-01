#include <stdio.h>
#include <pthread.h>

void *even() {
    printf("Even:");
    for (int i = 2; i <= 100; i += 2) {printf("%d , ",i);}
    printf("\n\n\n");
}

void *odd() {
    printf("Odd:");
    for (int i = 1; i < 100; i += 2) {printf("%d ,", i);}
    printf("\n\n\n\n");
}

int main() {
    pthread_t e, o;
    pthread_create(&e, NULL, even, NULL);
    pthread_create(&o, NULL, odd, NULL);
    pthread_join(e, NULL);
    pthread_join(o, NULL);
}
