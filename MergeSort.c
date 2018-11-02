//
// Created by aya on 01/11/18.
//

#include "MergeSort.h"
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


void mergeSort(int arr[], int left, int right) {
    if (left > right) {
        return;
    }
    int mid = left + (right  - left) /2;



}