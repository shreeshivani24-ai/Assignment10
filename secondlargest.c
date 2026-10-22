
#include <stdio.h>
#include <limits.h>

void secondlargest(int a[], int i, int n, int *l, int *sl)
{
    if (i == n)
        return;

    if (a[i] > *l)
    {
        *sl = *l;
        *l = a[i];
    }
    else if (a[i] > *sl && a[i] != *l)
    {
        *sl = a[i];
    }

    secondlargest(a, i + 1, n, l, sl);
}

int main()
{
    int a[100], n, i, l, sl;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2 || n > 100)
    {
        printf("Invalid number of elements");
        return 0;
    }

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    l = INT_MIN;
    sl = INT_MIN;

    secondlargest(a, 0, n, &l, &sl);

    if (sl == INT_MIN)
        printf("Second largest distinct element does not exist");
    else
        printf("The second largest element is: %d", sl);

    return 0;
}
