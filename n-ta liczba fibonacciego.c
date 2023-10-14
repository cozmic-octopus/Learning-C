#include<stdio.h>
/*Program generuje n-tą liczbę z ciagu fibbonaciego*/
int fibo(int n);
int main(void)
{
    int n;
    printf("Podaj liczbę n");
    scanf("%d", &n);
    printf("N-ta liczba ciagu fibonacciego to %d", fibo(n));
    return 0;
    
}
int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        int fib = fibo(n-1)+fibo(n-2);
        return fib;
    }
    
}