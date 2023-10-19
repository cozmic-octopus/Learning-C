#include<stdio.h>
#include<conio.h>
/*Program wypisujący tabele określające wielkość zostawionego napiwku. Zaczyna od 10zł i kończy na 250zł, wiekszając o 10zł. Oblicza trzy wielkości 10%, 15%, 20%. Po kazdej linii pyta użytkownika czy kontynuować.*/
int main(void)
{
    char ch;
    printf("Tabela wyliczajaca napiwki.\n100\%\t10\%\t15\%\t20\%\n");
    for(int i = 10; i < 251; i = i + 10)
    {
        printf("%d\t%.2lf\t%.2lf\t%.2lf\n", i, i*0.10, i*0.15, i*0.20);
        if(i == 250) break;
        printf("Kontynuowac? (t/n):");
        ch = getche();
        if(ch == 'n') break;
        printf("\n");
    }
    return 0;
}