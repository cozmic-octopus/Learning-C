#include<stdio.h>
/*Program generuje n-tą liczbę z ciagu fibbonaciego*/
long long fiboitr(long long n);
long long fibo(long long n);

int main(void)
{
    long long n;
    printf("Podaj liczbę n: ");
    scanf("%lld", &n);
    printf("%lld. liczba ciagu fibonacciego to %lld.", n, fiboitr(n));
    return 0;
}

long long fibo(long long n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        long long fib = fibo(n - 1) + fibo(n - 2);
        return fib;
    }
}

long long fiboitr(long long n)
{
    if(n == 1 || n == 2){
        return 1;
    }
    long long a = 0, b = 1;
    for(long long i = 1; i < n; i++)
    {
        b = b + a;
        a = b - a;
    }
    return b;
}