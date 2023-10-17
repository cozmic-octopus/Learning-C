#include<stdio.h>
#include<conio.h>
/* Program wczytujący dziesięć liter i wyświetlajacy literę, która wystepuje najwcześniej w alfabecie.*/
int main(void)
{
    char a, b = 2;
    printf("Wprowadz 1. litere:");
    a = getch();
    for(int i = 2; i<11; i++)
    {
        printf("\nWprowadz %d. litere:", i);
        b = getch();
        if(b < a)
        {
            a = b;
        }
    }
    printf("Najwczesniejsza liczba: %c", a);
    return 0;
}