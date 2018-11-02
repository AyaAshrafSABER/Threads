#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#include "ReadFromFile.h"
#include "MatrixMultiplication.h"
#include "MergeSort.h"
#include "WriteInFile.h"

#define NUM_THREADS 2


int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Try to enter argument to intialize the correct mode");
    } else {
        if (strcmp(argv[1],"1") == 0) {
            printf("You are on matrix mode\n");
            matrixes * data  =readMatrixes("input.txt");
            Results* mul = matrixMultiplication(data);
            matrixOutPutFile("output.txt", mul);

        } else {
            printf("You are in Merge Sort mode \n");
            arr* a = readUnSortedArray("input.txt");
            sort(a);
            sortedArrayOutPutFile("output.txt",a);
        }
    }
}