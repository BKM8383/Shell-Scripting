#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int in = 0;  // Index to insert item
int out = 0; // Index to remove item

sem_t empty, full, mutex;

void *producer(void *arg) {
    int item;
    for (int i = 0; i < 10; i++) {
        item = rand();  // Produce a random item
        sem_wait(&empty);
        sem_wait(&mutex);

        buffer[in] = item;
        in = (in + 1) % BUFFER_SIZE;

        printf("Produced: %d\n", item);

        sem_post(&mutex);
        sem_post(&full);
    }
    pthread_exit(NULL);
}

void *consumer(void *arg) {
    int item;
    for (int i = 0; i < 10; i++) {
        sem_wait(&full);
        sem_wait(&mutex);

        item = buffer[out];
        out = (out + 1) % BUFFER_SIZE;

        printf("Consumed: %d\n", item);

        sem_post(&mutex);
        sem_post(&empty);
    }
    pthread_exit(NULL);
}

int main() {
    pthread_t producer_thread, consumer_thread;
    srand(time(NULL);

    // Initialize semaphores
    sem_init(&empty, 0, BUFFER_SIZE);
    sem_init(&full, 0, 0);
    sem_init(&mutex, 0, 1);

    // Create producer and consumer threads
    pthread_create(&producer_thread, NULL, producer, NULL);
    pthread_create(&consumer_thread, NULL, consumer, NULL);

    // Wait for the threads to finish
    pthread_join(producer_thread, NULL);
    pthread_join(consumer_thread, NULL);

    // Destroy the semaphores
    sem_destroy(&empty);
    sem_destroy(&full);
    sem_destroy(&mutex);

    return 0;
}









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
