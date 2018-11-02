//
// Created by aya on 02/11/18.
//

#include "ReadFromFile.h"

/* Creates a ``rows by cols'' matrix with all values 0.
 * Returns NULL if rows <= 0 or cols <= 0 and otherwise a
 * pointer to the new matrix.
 */
matrix * newMatrix(int rows, int cols, FILE *fp) {
    if (rows <= 0 || cols <= 0) return NULL;

    // allocate a matrix structure
    matrix * m = (matrix *) malloc(sizeof(matrix));

    // set dimensions
    m->rows = rows;
    m->cols = cols;

    // allocate a double array of length rows * cols
    m->data = malloc(rows * sizeof(int*));
    if(m->data == NULL) {
        printf("Out of memory\n");
        exit(1);
    }

    for(int i = 0; i < rows; i++) {
        m->data[i] = malloc(cols * sizeof(int));
        if(m->data[i] == NULL) {
            printf("Out of memory\n");
            exit(1);
        }
    }

// Read matrix content from file
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int n;
            fscanf(fp, "%d", &n);
            printf("(%d,%d) = %d\n", i, j, n);
            m->data[i][j] = n;
        }
    }


    return m;
}
matrixes* readMatrixes(char *fileName){

    FILE *fp;
    fp = fopen(fileName, "r");
    if(fp==NULL)
    {
        printf("file could not be opened");
        exit(1);
    }
    matrixes * data = (matrixes *) malloc(sizeof(matrixes));
    int m,n;

    fscanf(fp,"%d %d",&m,&n);
    printf("(%d,%d)\n", m, n);
    data->A = newMatrix(m,n,fp);
    fscanf(fp,"%d %d \n",&m,&n);
    data->B = newMatrix(m,n,fp);
    printf(" this is B %d\n",data->B->cols);
    fclose(fp);

    return data;


}
arr* readUnSortedArray(char* fileName){

    FILE *fp;
    fp = fopen(fileName, "r");
    if(fp==NULL)
    {
        printf("file could not be opened");
        exit(1);
    }
    arr * a = (arr*) malloc( sizeof(arr));
    int n;
    fscanf(fp,"%d",&n);
    a->n = n;
    printf("%d\n",n);
    a->data = (int*) malloc( n * sizeof(int));
    for(int i = 0; i < n; i++) {
        int m;
        fscanf(fp,"%d",&m);
        a->data[i] = m;
    }
    fclose(fp);
    return a;

}