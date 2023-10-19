#include<stdio.h>
/*Program obliczający pole powierzchni koła, prostokąta lub trójkąta wykorzystujący drabinkę if-else-if*/
int main(void)
{
    char ch;
    int a, b;
    printf("Wybierz czy chcesz obliczyc pole powierzchni kola (k), prostokata (p), czy trojkata (t). Wprowadz pierwsza litere:");
    ch = getchar();
    printf("\n");
    if(ch == 'p') 
    {   
        printf("Wprowadz dlugosc podstawy prostokata:");
        scanf("%d", &a);
        printf("\nWprowadz wysokosc prostokata:");
        scanf("%d", &b);
        printf("Pole powierzchni prostokata to: %d", a*b);
        return 0;
    }
    else if(ch == 't')
    { 
        printf("Wprowadz dlugosc podstawy trojkata:");
        scanf("%d", &a);
        printf("\nWprowadz wysokosc trojkata:");
        scanf("%d", &b);
        printf("Pole powierzchni prostokata to: %.2lf", (a*b)/2);
        return 0;
    }
    else if(ch == 'k')
    {
        printf("Wprowadz promien kola:");
        scanf("%d", &a);
        printf("Pole powierzchni kola to: %.2lf", a*a*3.14);
        return 0;
    }
    else printf("Wprowadzono bledna litere.");
    return 0;
}