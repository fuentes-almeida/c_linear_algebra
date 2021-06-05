#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int main()
{
    int n,i,j;
    scanf("%d",&n);
    double** MatrixA;
    MatrixA=RequestMatrixDoubleMem(n,n);
    double *b;
    double *x;

    b=RequestVectorDoubleMem(n);
    x=RequestVectorDoubleMem(n);

    for (i=0;i<n;i++)
    for (j=0;j<n;j++)
    scanf("%lf",&MatrixA[i][j]);
    for (i=0;i<n;i++)
    scanf("%lf",&b[i]);
    x=SolveCholeskySystem(MatrixA,n,x,b);
    for (i=0;i<n;i++)
    printf("x[%d] = %lf \n",i,x[i]);

    free(x);
    free(b);
    freeMatrizDouble(MatrixA,n);

return 0;

}

