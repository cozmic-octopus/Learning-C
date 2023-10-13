#include<stdio.h>
/*Wejściem programu jest liczba całkowita n. Program zwraca n-tą liczbę pierwszą*/

int liczpie(int liczba);

int main(void)
{
    printf("Program zwraca n-tą liczbę pierwszą.\nPodaj n\n");
    int n;
    scanf("%d", &n);
    if(n < 1)
    {
        printf("Niepoprawne wejście.\n");
    }
    int liczba = 2;
    for(int licznik = 0; licznik < n; liczba++)
    {
        if(liczpie(liczba)==1)
        {
            licznik++;
        }
        
    }
    printf("%d. liczba pierwsza to: %d", n, liczba-1);
    return 0;    
}
int liczpie(int liczba)
{   
    if(liczba < 2)
    {
        return 0;
    }
    for(int i = 2; i < liczba; i++)
    {
        if(liczba%i == 0)
        {
            return 0;
        }
    }
    return 1;
}