//
// Created by aya on 01/11/18.
//

#ifndef THREADS_MERGESORT_H
#define THREADS_MERGESORT_H

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include "ReadFromFile.h"
/* create thread argument struct for thr_func() */
typedef struct _thread_Sort_data_t {
    int* arr;
    int left;
    int right;
} thread_Sort_data_t;
void sort(arr * arr);
void merge(int arr[], int left, int mid, int right);
void* mergeSort(void *arg);
#endif //THREADS_MERGESORT_H
