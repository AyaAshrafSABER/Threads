//
// Created by aya on 01/11/18.
//
 //ToDo: check dimansions are compatable to be multiply A[a][b]  * B[b][c] = C[a][c]
#include "MatrixMultiplication.h"
/* create thread argument struct for thr_func() */

/* thread function */
void *elementMethod(void *arg) {
    thread_data_t *data = (thread_data_t *)arg;
    int col = data->j;
    int row = data->i; //c[i]c[j]
    int sum = 0;
    for (int k =0; k <data->m->A->cols; k++) {
        sum += data->m->A->data[row][k] * data->m->B->data[k][col];
    }
    data ->result->data[row][col] = sum;
    pthread_exit(NULL);
}

void *rowMethod(void *arg) {
    thread_data_t *data = (thread_data_t *) arg;
    int row = data->i;
    for (int j = 0; j< data->m->B->cols ; j++){
        int sum = 0;
        for (int i = 0; i < data->m->A->cols ; i++) {
            sum += data->m->A->data[row][i]* data->m->B->data[i][j];
        }
        data->result->data[row][j] = sum;
    }
    pthread_exit(NULL);
}


Results* matrixMultiplication(matrixes * m){
    matrixResult * res1 = intializeMR(m);
    pthread_t thr[m->A->rows][m->B->cols];
    int i, rc;
    /* create a thread_data_t argument array */
    thread_data_t thr_data[m->A->rows][m->B->cols];
    clock_t t1, t2;
    t1 = clock();
    /* create threads */
    for (i = 0; i < m->A->rows ; ++i) {
        for(int j = 0; j < m->B->cols; ++j) {
            thr_data[i][j].tid = i+j;
            thr_data[i][j].i = i; //a row
            thr_data[i][j].j = j; //b cloumn
            thr_data[i][j].result = res1;
            thr_data[i][j].m = m;
            pthread_create(&thr[i][j], NULL, elementMethod, &thr_data[i][j]);
        }
    }
    /* block until all threads complete */
    for (i = 0; i < m->A->rows ; ++i) {
        for (int j = 0; j < m->B->cols; ++j) {
            pthread_join(thr[i][j], NULL);
        }
    }
    t2 =clock();
    res1->elapsedT = t2 - t1;
    //method 2
    matrixResult * res2 = intializeMR(m);
    pthread_t thr2[m->A->rows];
    thread_data_t thr_data2[m->A->rows];
    t1 = clock();
    for (i = 0; i < m->A->rows ; ++i) {
            thr_data2[i].tid = i;
            thr_data2[i].i = i; //a row
            thr_data2[i].j = 0; //b cloumn
            thr_data2[i].result = res2;
            thr_data2[i].m = m;
            pthread_create(&thr2[i], NULL, rowMethod, &thr_data2[i]);
    }
    /* block until all threads complete */
    for (i = 0; i < m->A->rows ; ++i) {
        pthread_join(thr2[i], NULL);
    }
    t2 =clock();
    res2->elapsedT = t2 - t1;
    Results* r = (Results *) malloc(sizeof(Results));
    r->method1 = res1;
    r->method2 =res2;
    return r;
}
matrixResult* intializeMR (matrixes * m) {
    matrixResult * res1 =(matrixResult *) malloc(sizeof(matrixResult)); //contain the result of element method
    // allocate a int array of length rows * cols
    res1 ->col = m->B->cols;
    res1->row = m->A->rows;
    res1->data = malloc(res1->row * sizeof(int*));
    if(res1->data == NULL) {
        printf("Out of memory\n");
        exit(1);
    }
    for(int i = 0; i < res1->row; i++) {
        res1->data[i] = malloc(res1->col * sizeof(int));
        if(res1->data[i] == NULL) {
            printf("Out of memory\n");
            exit(1);
        }
    }
    return res1;
}
