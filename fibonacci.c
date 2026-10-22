# include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int fib(int n)
    {
        if ( n==0 || n==1)
        {
            return n;
        }
        else
        {
            return fib(n-1) + fib(n-2);
        }
    }
    for(i = 0; i <= n; i++)
    {
        printf("%d", fib(i));
    }
    return 0;
}
        