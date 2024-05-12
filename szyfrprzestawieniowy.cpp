#include<iostream>
using namespace std;
//program rozszyfrywujacy tekst zaszyfrowany metoda przestawieniowa kolumnowa

int main()
{
    string napis;
    int wiersz, kolumna;
    cout << "Podaj tekst: ";
    getline(cin, napis);
    int dlugosc = napis.length();

    cout << "Podaj liczbe wierszy: ";
    cin >> wiersz;
    cout << "Podaj liczbe kolumn: ";
    cin >> kolumna;

    char tab[kolumna][wiersz];

    for (int t = 0; t < dlugosc;)
    {
        for (int i = 0; i < kolumna; i++)
        {
            for (int j = 0; j < wiersz; j++)
            {
                tab[i][j] = napis[t];
                t++;
            }

        }
    }

    for (int j = 0; j < wiersz; j++)
        {
            for (int i = 0; i < kolumna; i++)
            {
                cout << tab[i][j];

            }
        }
    cout << endl;
    return 0;
}
//Przykłady:
//nawoeiwatjeerermjajzoszsezcyaknddmi
//noazsuiwmetseojrtlckeawyhoszyssczzczlhcuhe

//rozwiazanie:
//niemoznawejscdwarazydotejsamejrzeki
//niechslowokochamjeszczerazzusttwychuslysze
