#include <iostream>
using namespace std;
void zlicz_znak(string tekst, char znaczek);
// Program zliczajacy ilosc podanego znaku w ciagu znakow

int main()
{
    string napis;
    char znak;
    cout << "Podaj napis: ";
        getline(cin, napis);
    cout << "Podaj znak: ";
    cin >> znak;
    
    zlicz_znak(napis, znak);
    
    return 0;
}

void zlicz_znak(string tekst, char znaczek)
{
    int liczba_a = 0;
    int log = tekst.length();
    for (int i = 0; i < log; i++)
    {
        if(tekst[i] == znaczek)
        liczba_a++;
    }

    cout << "Liczba znakow "<< znaczek <<" w napisie "<< tekst <<" wynosi: " << liczba_a << endl;
}