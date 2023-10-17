#include<stdio.h>
/*Program testujący, czy dana liczba jest pierwsza. 
Program dodatkowo wypisuje wszystkie dzielniki liczby podanej przez użytkownika.*/
int main(void)
{
    int n, pierwszosc;
    printf("Podaj liczbę całkowitą:\n");
    scanf("%d", &n);
    pierwszosc=1;
    printf("Dzielniki liczby:\n 1,\t");
    for(int i = 2; i <= n / 2; i++)
    {
        if((n % i) == 0)
        { 
            pierwszosc = 0;
            printf("%d,\t", i);
        }
    }
    printf("%d\n", n);
     
    if(pierwszosc == 1) printf("Liczba jest pierwsza.");
    else printf("Liczba nie jest pierwsza");
    return 0;
}