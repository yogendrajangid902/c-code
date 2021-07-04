#include <stdio.h>
int main()
{
    int i, j, n, A[7], temp;
    A = [1,4,3,5,78,56];
    for (i = 0; i < n; i++)
    {

        for (j = i + 1; j < n; j++)
        {
            if (A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    return 0;
}
