#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void *function1();
void *function2();
int DeadlockCreate();
pthread_mutex_t first_mutex, second_mutex;

int DeadlockCreate() {

 printf("--------------------------------------------------------------------------------\n\n");
 printf("\t\t\t  DEADLOCK CREATION \n\n");
  printf("--------------------------------------------------------------------------------\n\n");
 pthread_mutex_init(&first_mutex,NULL);  //initialize the lock
 pthread_mutex_init(&second_mutex,NULL);
 pthread_t one, two;
 pthread_create(&one, NULL, function1, NULL);  // create thread
 pthread_create(&two, NULL, function2, NULL);
 pthread_join(one, NULL);
 pthread_join(two, NULL);
 printf("Thread joined\n");
void *function1();
void *function2();

 }

void *function1( ) {
     printf("Thread ONE trying to acquire first_mutex\n");
     pthread_mutex_lock(&first_mutex);  // to acquire the resource/mutex lock
     printf("Thread ONE acquired first_mutex\n");
     sleep(1);

     printf("Thread ONE Trying to acquire second_mutex\n");
     pthread_mutex_lock(&second_mutex);
     printf("Thread ONE acquired second_mutex\n");
     pthread_mutex_unlock(&first_mutex); // to release the resource
     printf("Thread ONE released first_mutex\n");
}

void *function2( ) {
     printf("Thread TWO trying to acquire second_mutex\n");
     pthread_mutex_lock(&second_mutex);
     printf("Thread TWO acquired second_mutex\n");
     sleep(1);
     printf("Thread TWO trying to acquire first_mutex\n");
     pthread_mutex_lock(&first_mutex);
     printf("Thread TWO acquired first_mutex\n");
     pthread_mutex_unlock(&second_mutex);
     printf("Thread TWO released second_mutex\n");
}