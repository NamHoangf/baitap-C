#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#define N 100
#define M 100
 
void ImportData(int Matrix[][M], int nRow, int nCol, char* nameMatrix);
void PrintMatrix(int** Matrix, int nRow, int nCol);
int** Add2Matrix(int A[][M], int B[][M], int nRow, int nCol);
void main()
{
    int iRow, iCol;
    int nRow, nCol;
    int A[N][M];
    int B[N][M];
    int** C;
 
    printf("\nNhap kich thuoc hang: ");
    scanf("%d", &nRow);
    printf("\nNhap kich thuoc cot: ");
    scanf("%d", &nCol);
    ImportData(A, nRow, nCol, "A");
    ImportData(B, nRow, nCol, "B");
    C = Add2Matrix(A, B, nRow, nCol);
    PrintMatrix(C, nRow, nCol);
 
    getch();
}
int** Add2Matrix(int A[][M], int B[][M], int nRow, int nCol)
{
    int iRow, iCol;
    int **C;
    C = (int**)malloc(nRow * sizeof(int *));
    for(iRow = 0; iRow < nRow; iRow++)
    {
        C[iRow] = (int*)malloc(nCol * sizeof(int));
    }
    for(iRow = 0; iRow < nRow; iRow++)
        for (iCol = 0; iCol < nCol; iCol++)
        {
            C[iRow][iCol] = A[iRow][iCol] + B[iRow][iCol];
        }
    return C;
}
void ImportData(int Matrix[][M], int nRow, int nCol, char* nameMatrix)
{
    int iRow, iCol;
    for(iRow = 0; iRow < nRow; iRow++)
        for(iCol = 0; iCol < nCol; iCol++)
        {
            printf("\n%s[%d][%d] = ", nameMatrix, iRow, iCol);
            scanf("%d", &Matrix[iRow][iCol]);
        }
}
void PrintMatrix(int** Matrix, int nRow, int nCol)
{
    int iRow, iCol;
    printf("\nA = ");
    for(iRow = 0; iRow < nRow; iRow++)
    {
        printf("\n");
        for (iCol = 0; iCol < nCol; iCol++)
        {
            printf("%5d", Matrix[iRow][iCol]);
        }
    }
}
