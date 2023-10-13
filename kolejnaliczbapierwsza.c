#include<stdio.h>
/*Wejściem programu jest liczba całkowita n. Program zwraca n-tą liczbę pierwszą*/

int liczpie(int liczba);

int main(void)
{
    printf("Program zwraca n-tą liczbę pierwszą.\nPodaj n\n");
    int n;
    scanf("%d", &n);
    int liczba = 2;
    for(int licznik = 0; licznik < n; liczba++)
    {
        if(liczpie(liczba)==1)
        {
            printf("%d\n", liczba);
            licznik++;
        }
        
    }
    printf("%d. liczba pierwsza to: %d", n, liczba-1);
    return 0;    
}
int liczpie(int liczba)
{
    for(int i = 2; i < liczba; i++)
    {
        if(liczba%i == 0)
        {
            return 0;
        }
    }
    return 1;
}