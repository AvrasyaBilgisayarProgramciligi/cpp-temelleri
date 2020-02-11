#include <iostream>

using namespace std;

int main()
{
    /* Atama operatörü (=)
     * Bir değişkene herhangi bir değer atanacağı 
     * zaman kullanılan operatör.
     */
    int sayi = 2;
    char harf = 'c';

    /* Aritmetik operatörler
     * Toplama  (+)
     * Çıkarma  (-)
     * Çarpma   (*)
     * Bölme    (/)
     * Mod Alma (%)
     */

    /* Örnek;
     * Verilen iki değerin dört işlemde sonucunu hesaplayınız.
     */

    int sayi_1 = 10, sayi_2 = 5;

    cout << "Toplamı: " << sayi_1 + sayi_2 << endl;
    cout << "Farkı: " << sayi_1 - sayi_2 << endl;
    cout << "Çarpımı: "<< sayi_1 * sayi_2 << endl;
    cout << "Bölümü: " << sayi_1 / sayi_2 << endl;

    /* Aritmetik atama operatörleri
     * Tople ve ata  (+=)
     * Çıkar ve ata  (-=)
     * Çarp ve ata   (*=)
     * Böl ve ata    (/=)
     * Mod al ve ata (%=)
     */

    /* Karşılaştırma operatörleri
     * Küçüktür operatörü      (<)
     * Büyüktür operatörü      (>)
     * Küçük eşittir operatörü (<=)
     * Büyük eşittir operatörü (>=)
     * Eşit mı operatörü       (==)
     * Farklı mı operatörü     (!=) 
     */

    //Örnekler;
    bool a = (6 < 3);
    cout << "6 3' ten küçük mü?: " << a << endl;
    a = (9 > 5);
    cout << "9 5' ten büyük mü?: " << a << endl;

    return 0;
}