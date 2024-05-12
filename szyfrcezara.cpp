#include<iostream>
using namespace std;
//program rozszyfrywujacy tekst metada cezara

int main()
{
    string napis;
    cout << "Podaj tekst: ";
    getline(cin, napis);
    int dlugosc = napis.length();

    for (int i = 0; i < dlugosc; i++)
    {
        if(napis[i] == 'X' || napis[i] == 'Y' || napis[i] == 'Z')
        {
            napis[i] -= 24;
        }
        else 
        {
            napis[i] += 3;
        }

    }
    cout << "Odszyfrowany napis: " << napis << endl;
    return 0;
}