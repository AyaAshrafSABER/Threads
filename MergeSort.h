//
// Created by aya on 01/11/18.
//

#ifndef THREADS_MERGESORT_H
#define THREADS_MERGESORT_H

#include <pthread.h>
void merge(int arr[], int left, int mid, int right);
void mergeSort(int arr[], int left, int right);
#endif //THREADS_MERGESORT_H
