
#include <stdio.h>

int findMax(int a[], int n)
{
    if (n == 1)
        return a[0];

    int max = findMax(a, n - 1);

    if (a[n - 1] > max)
        return a[n - 1];
    else
        return max;
}

int countMax(int a[], int n, int max)
{
    if (n == 0)
        return 0;

    if (a[n - 1] == max)
        return 1 + countMax(a, n - 1, max);
    else
        return countMax(a, n - 1, max);
}

int main()
{
    int n, i, max, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    if (n <= 0)
    {
        printf("Invalid size");
        return 0;
    }

    max = findMax(a, n);
    count = countMax(a, n, max);

    printf("Maximum element = %d\n", max);
    printf("Occurrences = %d", count);

    return 0;
}
