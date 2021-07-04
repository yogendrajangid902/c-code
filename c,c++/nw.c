#include <stdio.h>

#define R 10
#define C 10

/*User Define Function to Read Matrix*/
void readMatrix(int m[][C], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter element [%d,%d] : ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }
}

/*User Define Function to Read Matrix*/
void printMatrix(int m[][C], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[R][C], b[R][C], result[R][C];
    int i, j, r1, c1, r2, c2;

    printf("Enter number of Rows of matrix a: ");
    scanf("%d", &r1);
    printf("Enter number of Cols of matrix a: ");
    scanf("%d", &c1);

    printf("\nEnter elements of matrix a: \n");
    readMatrix(a, r1, c1);

    printf("Enter number of Rows of matrix b: ");
    scanf("%d", &r2);
    printf("Enter number of Cols of matrix b: ");
    scanf("%d", &c2);

    printf("\nEnter elements of matrix b: \n");
    readMatrix(b, r2, c2);

    /*sum and sub of Matrices*/
    if (r1 == r2 && c1 == c2)
    {
        /*Adding two matrices a and b, and result storing in matrix result*/
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                result[i][j] = a[i][j] + b[i][j];
            }
        }

        /*print matrix*/
        printf("\nMatrix after adding (result matrix):\n");
        printMatrix(result, r1, c1);

        /*Subtracting two matrices a and b, and result storing in matrix result*/
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                result[i][j] = a[i][j] - b[i][j];
            }
        }

        /*print matrix*/
        printf("\nMatrix after subtracting (result matrix):\n");
        printMatrix(result, r1, c1);
    }
    else
    {
        printf("\nMatrix can not be added, Number of Rows & Cols are Different");
    }
    return 0;
}