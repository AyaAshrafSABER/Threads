//
// Created by aya on 02/11/18.
//
#include "WriteInFile.h"

void matrixOutPutFile(char* fileName,  Results* mul) {
    remove(fileName);
    FILE *out_file = fopen(fileName, "a"); // write only
    // test for files not existing.
    if (out_file == NULL)
    {
        printf("Error! Could not open file\n");
        exit(-1); // must include stdlib.h
    }

    fprintf(out_file, "[%d, %d]\n", mul->method1->row, mul->method1->col); // write to file
    for(int i = 0; i < mul->method1->row; ++i ){
        fprintf(out_file, "[");
        for(int j = 0; j < mul->method1->col -1; ++j) {
            fprintf(out_file, "%d\t", mul->method1->data[i][j]);
        }
        fprintf(out_file, "%d]\n", mul->method1->data[i][mul-> method1->col -1]);

    }
    fprintf(out_file, "END1\t[%lf]\n",mul->method1->elapsedT); // write to file
    //method 2
    fprintf(out_file, "END2\t[%lf]\n",mul->method2->elapsedT); // write to file

    fclose(out_file);

}
void sortedArrayOutPutFile(char* fileName, arr* arr){
    remove(fileName);
    FILE *out_file = fopen(fileName, "a"); // write only
    // test for files not existing.
    if (out_file == NULL)
    {
        printf("Error! Could not open file\n");
        exit(-1); // must include stdlib.h
    }
    int len = arr->n;
    fprintf(out_file, "[%d]\n", len); // write to file
    fprintf(out_file, "[");
    for(int i = 0; i < len-1; i++) {
        fprintf(out_file, "%d\t", arr->data[i]);
        printf("%d ", arr->data[i]);
    }
    fprintf(out_file, "%d]", arr->data[len-1]);
    printf("%d" ,arr->data[len-1]);
    fclose(out_file);
}
