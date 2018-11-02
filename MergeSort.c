//
// Created by aya on 01/11/18.
//

#include "MergeSort.h"

void mergeSort(int arr[], int left, int right) {
    if (left > right) {
        return;
    }
    int mid = left + (right  - left) /2;

//    pthread_t thr[NUM_THREADS];
//    int i, rc;
//    /* create a thread_data_t argument array */
//    thread_data_t thr_data[NUM_THREADS];
//
//    /* create threads */
//    for (i = 0; i < NUM_THREADS; ++i) {
//        thr_data[i].tid = i;
//        if ((rc = pthread_create(&thr[i], NULL, thr_func, &thr_data[i]))) {
//            fprintf(stderr, "error: pthread_create, rc: %d\n", rc);
//            return EXIT_FAILURE;
//        }
//    }
//    /* block until all threads complete */
//    for (i = 0; i < NUM_THREADS; ++i) {
//        pthread_join(thr[i], NULL);
//    }
//
//    return EXIT_SUCCESS;

}