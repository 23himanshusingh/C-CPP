#include<stdio.h>
#define ROW 10
#define COL 10
int trace(int x[ROW][COL], int r, int c){
    int i, j, s=0;
    for (i=0; i<r; i++){
        for (j=0; j<c; j++){
            if (i == j) s = s + x[i][j];
        }
    }
    return s;
}
int main()
{
    int a[ROW][COL], row, col, i, j, sum;
    printf("\nEnter no. of rows and columns of a matrix: ");
    scanf("%d %d", &row, &col);
    printf("\nEnter elements:\n");
    for (i=0; i<row; i++){
        for (j=0; j<col; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nMatrix is:\n\n");
    for (i=0; i<row; i++){
        for (j=0; j<col; j++){
            printf("%d", a[i][j]);
            printf("\n");
        }
    }
    sum = trace(a, row, col);
    printf("\nSum: %d", sum);
    return 0;
}
