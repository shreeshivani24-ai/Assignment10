
#include <stdio.h>

int multiplyElement(int a[][10], int b[][10],
                   int i, int j, int k, int c)
{
    if (k == 0)
        return c;

    return multiplyElement(a, b, i, j, k - 1,
                          c + a[i][k - 1] * b[k - 1][j]);
}

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, i, j;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Matrix multiplication not possible");
        return 0;
    }

    printf("Enter first matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            c[i][j] = multiplyElement(a, b, i, j, c1, 0);

    printf("Product matrix:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
            printf("%d ", c[i][j]);

        printf("\n");
    }

    return 0;
}
