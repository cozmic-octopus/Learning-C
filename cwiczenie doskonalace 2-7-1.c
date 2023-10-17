#include<stdio.h>
/*Zgadnij sekretną liczbę. Użytkownik ma 10 szans na zgdanięcie liczby. Jeśli użytkownik zgadnie liczbę, pojawia się komunikat "Dobrze" i nastepuje koniec gry. W przeciwnym wypadku program informuje, czy wprowadzona liczba jest większa czy mniejsza od sekretnej liczby i gra toczy się dalej. Program zwraca liczbe prób*/
int main(void)
{
    int n;
    int k = 7312;
    printf("Odgadnij liczbę!\n Masz 10 prób. Wprowadź swoją propozycję:");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        if(n == k) 
        {
            printf("DOBRZE!");
            return 0;
        }
        else 
        {
            printf("ŹLE! Spróbuj jeszcze raz. Zostało Ci jeszcze %d prób.", 9 - i);
            if(n < k)
            {
                printf("Sekretna liczba jest większa od podanej.\n");
            }
            else
            {
                printf("Sekretna liczba jest mniejsza od podanej.\n");
            }
        }
    }
    return 0;
}