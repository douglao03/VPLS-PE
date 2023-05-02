#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<sys/syscall.h>

int val=0;
pthread_mutex_t mutex;
pthread_mutex_t vazio;
pthread_mutex_t full;
void * Produtor (void * argumento){
	int myid;
	myid = *(int *)argumento;
	while(1){
	    pthread_mutex_lock(&vazio);  
	    pthread_mutex_lock(&mutex);  
	    val++;
	    pthread_mutex_unlock(&mutex);
	    pthread_mutex_unlock(&full);  
	   printf("thread %d produz = %d\n", myid, val);
	    fflush(stdout);
	}
	pthread_exit(NULL);
    
}

void * Consumidor (void * argumento){
	int myid;
	myid = *(int *)argumento;
	while(1){
	    pthread_mutex_lock(&full);  
	    pthread_mutex_lock(&mutex);
	    printf("thread %d consome = %d\n", myid, val);
	    fflush(stdout);
	    pthread_mutex_unlock(&vazio); 
	    pthread_mutex_unlock(&mutex);
	     
	}
	pthread_exit(NULL);
    
}

int main(void){
   pthread_t id[2];
   int i = 0, j = 1;
   pthread_create(&id[0], NULL, Produtor, (void*)&i);
    pthread_create(&id[1], NULL, Consumidor, (void*)&j);
    pthread_join(id[0],NULL);
    pthread_join(id[1], NULL);
    return 1;
}
