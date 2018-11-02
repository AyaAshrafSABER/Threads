//
// Created by aya on 02/11/18.
//

#ifndef THREADS_READFROMFILE_H
#define THREADS_READFROMFILE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int rows;
    int cols;
    int **data;
} matrix;
typedef struct {
    int n;
    int *data;
} arr;

typedef struct {
     matrix* A;
     matrix* B;
} matrixes;
matrix * newMatrix(int rows, int cols, FILE *fp);
matrixes * readMatrixes(char *fileName);
arr* readUnSortedArray(char* fileName);
#endif //THREADS_READFROMFILE_H