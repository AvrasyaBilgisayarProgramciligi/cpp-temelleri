/* Açıklama:
 * Nesneye yönelik programlama diğer konulara nazaran uzun soluklu ve 
 * bir tık daha önemlidir. Bu nedenle kafanızda soru işareti kalmaması için
 * detaycı bir anlatım uygulayacağım ve bunu ayrı bir döküman olarak hazırlayacağım.
 * 
 * Bu dosyada örnek proje olacaktır. Lütfen bu dosyayı incelemeden önce 
 * 'Sınıflar Ve Nesneler' dökümantasyonunu inceleyiniz.
 */

#include <iostream>
#include <cmath>

#define LEVEL_1_ENVANTER 50;
#define LEVEL_2_ENVANTER 75;
#define LEVEL_1_ENVANTER 100;

using namespace std;

class Envanter
{
    
};

class Esya
{
    private:
    string tur; // Eşyanın türü
    int boyut;  // Eşyanın envanterde kaplayacağı alan

    public:
    Esya(string tur, int boyut)
    {
        this->tur = tur;
        this->boyut = boyut;
    }
};

class Kilic : public Esya
{
    private:
    string isim;
    int saldiri_gucu;
    int agirlik;

    public:
    Kilic(string isim, int saldiri_gucu, int agirlik) : Esya("Kılıç", ceil((saldiri_gucu * agirlik) / 2))
    {
        this->isim = isim;
        this->saldiri_gucu = saldiri_gucu;
        this->agirlik = agirlik;
    }
};

class Kalkan : public Esya
{
    private:
    string isim;
    int savunma_gucu;
    int agirlik;

    public:
    Kalkan(string isim, int savunma_gucu, int agirlik) : Esya("Kalkan", ceil((savunma_gucu * agirlik) / 2))
    {
        this->isim = isim;
        this->savunma_gucu = savunma_gucu;
        this->agirlik = agirlik;
    }
};