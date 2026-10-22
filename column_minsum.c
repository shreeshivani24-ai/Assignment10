
#include <stdio.h>

int columnSum(int a[][10], int rows, int col, int i)
{
    if (i == rows)
        return 0;

    return a[i][col] + columnSum(a, rows, col, i + 1);
}

int main()
{
    int a[10][10], r, c, i, j;
    int sum, minSum, minCol;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    minSum = columnSum(a, r, 0, 0);
    minCol = 0;

    for (j = 1; j < c; j++)
    {
        sum = columnSum(a, r, j, 0);

        if (sum < minSum)
        {
            minSum = sum;
            minCol = j;
        }
    }

    printf("Column with minimum sum = %d\n", minCol + 1);
    printf("Minimum sum = %d", minSum);

    return 0;
}
