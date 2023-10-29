#include<stdio.h>
/*Program wykorzystujący algorytm szukania binarnego*/
int szubi(int tab[], int, int);
int main (void)
{
    int tab[20];
    int dl = 20;
    for(int j = 0; j < 20; j++) /*Przypisanie wartości do tablicy*/
    {
        tab[j] = j + 5;
    }
    int elem = 8;
    int indeks = szubi(tab, dl, elem);
    printf("Element %d znaleziony na miejscu %d - tym \n", elem, indeks);
    return 0;
}

int szubi(int tab[], int dl, int elem) /*Szukanie binarne*/
{
    int low = 0;
    int high = dl - 1;
    while(low <= high)
    {
        int mid = (low + high)/2;
        int guess = tab[mid];
        if(guess == elem)
            return mid;
        if(guess > elem)
            high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}