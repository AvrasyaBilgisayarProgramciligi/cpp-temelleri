#include <iostream>
#include <random>

using namespace std;

/* Fonksiyonlar yalnızca çağırıldığında çalışan kod bloklarıdır.
 *
 * Avantajları;
 * - Kod tekrarı ortadan kalkar.
 * - Programı düzenlemek kolaylaşır.
 * - Okunabilirliği artırır.
 * - Hata olasılığını azaltır.
 */

/* Fonksiyon tanımlama
 * (dönüş tipi) (fonksiyon ismi(parametreler))
 * {
 *     // komutlar
 * }
 */

/* Dört farklı fonksiyon türü vardır;
 * - Değer almayan ve değer dönmeyen.
 * - Değer almayan fakat değer dönen.
 * - Değer alan fakat değer dönmeyen.
 * - Değer alan ve değer dönen.
 */

// Örnek (değer almayan ve değer dönmeyen):
void ekrana_yaz()
{
    cout << "Değer döndürmeyen fonksiyon" << endl;
}

// Örnek (değer almayan fakat değer dönen):
float hava_kac_derece()
{
    random_device device;
    mt19937 engine(device());
    uniform_real_distribution<float> distance(1.0f, 30.0f);

    // Üst tarafı bilmenize gerek yok kısacası rastgele
    // sayı üretmek için kullanılan bir kod parçası.
    return distance(engine);
}

// Örnek (değer alan fakat değer dönmeyen)
void balik_besle(int numara)
{
    if(numara > 0)
    {
        cout << numara << " numaralı balık beslendi." << endl;
    }
    else
    {
        cout << numara << " numaralı bir balık bulunamadı." << endl;
    }
}

// Örnek (değer alan ve değer dönen)
int kare_hesapla(int sayi)
{
    return sayi * sayi;
}