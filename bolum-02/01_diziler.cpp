#include <iostream>

using namespace std;

int main()
{
    /* Bellekte sıralı bir şekilde bulunan ve aynı türden
     * bilgilerin saklandığı veri yapısına dizi (array) denir.
     */

    /* Tek boyutlu dizi tanımlama
     * (veri tipi) (dizi ismi[dizinin boyutu]) veya
     * (veri tipi) (dizi ismi[dizinin boyutu]) = {}
     */
    int yaslar[10];
    float notlar[10];
    char harfler[10];

    // Örnek:
    int tam_sayilar[5];
    tam_sayilar[0] = 15;
    tam_sayilar[1] = 25;
    tam_sayilar[2] = 67;
    tam_sayilar[3] = 43;
    tam_sayilar[4] = 56;

    // Not: Indeksler 0'dan başlar bu nedenle tam_sayilar[5]
    // dediğimizde aslında indeks dörte kadar geliyoruz.
    for (int i = 0; i < 5; ++i)
    {
        cout << tam_sayilar[i] << endl;
    }

    /* Çok boyutlu dizi tanımlama
     * (veri tipi) (dizi ismi[dizinin boyutu][dizinin boyutu]) veya
     * (veri tipi) (dizi ismi[dizinin boyutu][dizinin boyutu]) = {}
     */
    int sayilar[2][2];
    float fiyatlar[2][2];
    char karakterler[2][2];

    // Örnek:
    bool mayin_tarlasi[2][2];
    mayin_tarlasi[0][0] = true;
    mayin_tarlasi[0][1] = false;
    mayin_tarlasi[1][0] = false;
    mayin_tarlasi[1][1] = true;

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << mayin_tarlasi[i][j] << endl;
        }
    }

    return 0;
}