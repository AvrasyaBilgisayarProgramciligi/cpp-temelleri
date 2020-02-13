/* Bu bölümde çoğunlukla örnek çözerek fonksiyonların akılda
 * kalıcılığını artıtrmaya calışacağız.
 */

#include <iostream> // Dilin ana kütüphanesi.
#include <cctype> // Karakterler üzerinde işlem yapan fonksiyonların bulunduğu kütüphanedir.
#include <cstring> // Dizgiler üzerinde işlem yapan fonksiyonların bulunduğu kütüphanedir.
#include <cmath>

using namespace std; // 'std' alanını programa dahil etme işlemi

void soru_1(char *dizgi);

void soru_2(char *kullanici_adi, char *parola);

void soru_3(int sayi);

int main()
{
    /* Öncellikle ezberden kaçının fonksiyonların
     * ne işe yaradığını açıklamasına bakarak doğal öğrenme ile
     * kalıcılığını sağlamanız sizin için daha iyi olucaktır.
     */

    /* Karakter işleme fonksiyonları
     * Tablo 1.0
     */

    char harf = 'A';

    /* isalpha gönderilen argüman harf değil ise 0
     * harf ise 0 dan farklı bir değer döndürür.
     */
    cout << isalpha(harf) << endl;

    /* isdigit aynı mantık gönderirlen argüman rakam değil ise 0
     * rakam ise 0 dan farklı bir değer döndürür.
     */
    cout << isdigit(harf) << endl;

    /* <cctype> kütüphanesinin fonksiyonları
     * ile ilgili kaynak Readme dosyasında olucaktır
     */

    /* Soru 1:
     * Argüman olarak gönderilen bir dizginin küçük harflerini
     * büyük harfe çevirip yazdıran programı fonksiyonlar ile yazalım.
     */

    // Çözüm:
    soru_1("cpp ogremiyorum");

    /* Dizgi işleme fonksiyonları
     * Tablo 1.1
     */

    char *karsila = "Hos geldiniz";

    /* strlen argüman olarak gönderilen
     * dizginin boyutunu döner.
     */
    cout << strlen(karsila) << endl;

    /* strcmp argüman olarak gönderilen dizginileri karşılaştırır.
     * Eğer dizgiler eşleşiyorsa 0 eşleşmiyorsa 0 dan fakrlı bir değer döner.
     */
    cout << strcmp(karsila, "Hos geldiniz") << endl;

    /* Soru 2:
     * Argüman olarak gönderilen kullanıcı adı ve parola kayıtlı olan
     * kullancı adı ve parola ile eşleşiyorsa
     * kullanıcıya karşılama mesajı yazdıran programı fonksiyonlar ile yazalım.
     *
     * Not: Kayıtlı olan kullanıcı adı ve paraloyı siz belirleye bilirsiniz.
     */

    // Çözüm:
    soru_2("admin", "admin123");

    /* Matematik fonksiyonları
     * Tablo 1.2
     */

    int sayi = 16;

    /* sqrt argüman olarak gönderilen sayının karekökünü
     * hesaplar ve sonucu geri döndürür.
     */
    cout << sqrt(sayi) << endl;

    /* pow gönderilen iki argümadan birinci argümanın
     * ikinci argüman kuvetini hesaplar ve sonucu geri döndürür.
     */
    cout << pow(sayi, 2) << endl;

    /* Soru 3:
     * Argüman olarak gönderilen sayının karesini ve karekökünü
     * hesaplayıp ekrana yazdıran programı fonksiyonlar ile yazalım.
     */

    // Çözüm:
    soru_3(16);

    return 0;
}

void soru_1(char *dizgi)
{
    for (int i = 0; i < strlen(dizgi); i++)
    {
        cout << (char) toupper(dizgi[i]);
    }
    cout << endl;
}

void soru_2(char *kullanici_adi, char *parola)
{
    char *k_kullanici_adi = "admin";
    char *k_parola = "admin123";

    if(strcmp(kullanici_adi, k_kullanici_adi) == 0 && strcmp(parola, k_parola) == 0)
    {
        cout << "Hoşgeldiniz" << endl;
    }
    else
    {
        cout << "Giriş bilgileri hatalı" << endl;
    }
}

void soru_3(int sayi)
{
    cout << pow(sayi, 2) << endl;
    cout << sqrt(sayi) << endl;
}