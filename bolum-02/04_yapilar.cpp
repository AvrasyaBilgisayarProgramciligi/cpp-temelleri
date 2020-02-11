#include <iostream>

using namespace std;

int main()
{
    /* Birbiri ile ilişkili veri kümelerine struct (yapı) denir.
     * Yapı olarak dizilere çok benzemektedir. 
     * Çünkü diziler gibi birden fazla nesneyi içinde bulundururlar.
     * ! Fakat diziler sadece aynı türe sahip değerleri bir arada tutabiliyorken
     * yapılar farklı türden nesneleri içerisnde barındırabilir.
     */

    /* Yapı tanımlama
     * (struct) (yapının türü)
     * {
     *  (veri türü) (değişken adı);
     *  (veri türü) (değişken adı);
     *  (veri türü) (değişken adı);
     *  (veri türü) (değişken adı);
     * }(değişken listesi);
     */
    struct Musteri{
        char *isim;
        char *soyisim;
        int yas;
    } m1, m2, m3;

    // Kullanım:
    m1.isim = "Orhan";
    m1.soyisim = "Şahin";
    m1.yas = 21;

    // Veya yapıdan farklı bir değişken oluşturulabilir
    struct Musteri orhan;
    orhan.isim = "Orhan";
    orhan.soyisim = "Şahin";
    orhan.yas = 21;

    /* Yapı elemanlarına erişim
     * (yapi_degiskeni.degisken_adi)
     */

    // Test:
    cout << "Müşteri ismi: " << orhan.isim << endl;
    cout << "Müşteri soyisim: " << orhan.soyisim << endl;
    cout << "Müşteri yaş: " << orhan.yas << endl;

    /* Output:
     * Müşteri ismi: Orhan
     * Müşteri soyisim: Şahin
     * Müşteri yaş: 21
     */

    /* Typedef ifadesi
     * Oluşturduğumuz veri yapılarını bir değişkenmiş gibi çağrıda bulunabiliriz.
     */
    typedef struct
    {
        char *isim;
        char *bolge;
        int plaka;
    } Il;

    Il il;
    il.isim = "Trabzon";
    il.bolge = "Karadeniz Bölgesi";
    il.plaka = 61;
    
    // Test:
    cout << "İl ismi: " << il.isim << endl;
    cout << "İl bölgesi: " << il.bolge << endl;
    cout << "İl plakası: " << il.plaka << endl;

    /* Output:
     * İl ismi: Trabzon
     * İl bölgesi: Karadeniz Bölgesi
     * İl plakası: 61
     */
    
    return 0;
}