//
// Created by aya on 01/11/18.
//

#include "MergeSort.h"
void merge(int arr[], int left, int mid, int right){
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 =  right - mid;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid+ 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = left; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}


/* thread function */
void* mergeSort(void *arg) {
    thread_Sort_data_t *data = (thread_Sort_data_t *)arg;
    if (data == NULL) {
        printf("Cannot allocate this");
    }
    if (data->left < data->right)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int mid = data->left+(data->right - data->left)/2;
        thread_Sort_data_t th1; //contain the result of element method
        th1.arr = data->arr;
        th1.left = 0;
        th1.right = mid;
        // Sort first and second halves
        thread_Sort_data_t th2; //contain the result of element method
        th2.arr = data->arr;
        th2.left = mid + 1;
        th2.right = data->right;

        pthread_t thr1;
        pthread_t thr2;

        pthread_create(&thr1, NULL, mergeSort, &th1);
        pthread_create(&thr2, NULL, mergeSort, &th2);
        pthread_join(thr1, NULL);
        pthread_join(thr2, NULL);
        merge(data->arr, th1.left, th1.right, th2.right);

    }
}

void sort(arr * a) {
    thread_Sort_data_t  th; //contain the result of element method
    th.arr = a->data;
    th.left = 0;
    th.right = a->n -1;
    pthread_t thr;

    pthread_create(&thr, NULL, mergeSort, &th);
    pthread_join(thr, NULL);
}