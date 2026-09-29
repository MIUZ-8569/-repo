#include <stdio.h>
long long SUM(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibo(n + 2) - 1;
}
long long fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("The sum till %d'th fibonacci number is %lld.\n", n, SUM(n));
    return 0;
}