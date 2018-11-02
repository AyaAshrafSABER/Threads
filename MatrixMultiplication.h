//
// Created by aya on 01/11/18.
//

#ifndef THREADS_MATRIXMULTIPLICATION_H
#define THREADS_MATRIXMULTIPLICATION_H

#include "ReadFromFile.h"
#include <time.h>
#include <pthread.h>
typedef struct {
    double elapsedT;
    int row;
    int col;
    int **data;
} matrixResult;
typedef struct _thread_data_t {
    int tid;
    int i; //row in matrix A
    int j; // column in matrix B
    matrixes * m; // contain matix A and matrix  and their dimansions
    matrixResult* result; //contain matrix multiplication result C[A.rows][B.columns]
} thread_data_t;

typedef struct {
    matrixResult* method1;
    matrixResult* method2;
} Results;

void *elementMethod(void *arg);

void *rowMethod(void *arg);

Results * matrixMultiplication(matrixes * data);
matrixResult* intializeMR (matrixes * m);


#endif //THREADS_MATRIXMULTIPLICATION_H
