# include <stdio.h>
int main()
{
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    long long fact(int n)
    {
        if (n == 0 || n == 1)
        {
            return 1;
        }
        else
        {
            return n * fact(n - 1);
        }
    }
    printf("Factorial of %d is: %lld", n, fact(n));
    return 0;
}