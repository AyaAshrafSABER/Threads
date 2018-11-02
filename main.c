#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "ReadFromFile.h"

#define NUM_THREADS 2

/* create thread argument struct for thr_func() */
typedef struct _thread_data_t {
    int tid;
    double stuff;
} thread_data_t;

/* thread function */
void *thr_func(void *arg) {
    thread_data_t *data = (thread_data_t *)arg;

    printf("hello from thr_func, thread id: %d\n", data->tid);

    pthread_exit(NULL);
}

int main(int argc, char **argv) {
    matrixes * data  =readMatrixes("input.txt");
    int* arr = readUnSortedArray("input.txt");
}