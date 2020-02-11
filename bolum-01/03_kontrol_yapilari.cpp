#include <iostream>

using namespace std;

int main()
{
    /* If yapısı
     * Programlama dilinde program akışını kontrol etmekte kullanılan yapıdır.
     */

    // Kullanım:
    bool test = true;
    if (test/*kontrol edilecek ifade*/)
    {
        // Kontrol ifadesi 'true' ise veya 'true' dönüyorsa
        // bu kod bloğu çalışacaktır.
    }

    /* Else yapısı
     * Koşul yanlış ise 'else' yapısı devreye girer.
     */
    test = false;
    if(test)
    {
        // Kontrol ifadesi 'true' ise veya 'true' dönüyorsa
        // bu kod bloğu çalışacaktır.
    }
    else
    {
        // Kontrol ifadesi 'false' ise veya 'false' dönüyorsa
        // bu kod bloğu çalışacaktır.
    }

    // Örnek:
    int yas;
    cout << "Lütfen yaşınızı giriniz: ";
    cin >> yas; // 'cin' ifadesi programa dışardan input almak için kullanılır.
    
    if(yas > 18)
    {
        cout << "Aramıza Hoşgeldin" << endl;
    }
    else
    {
        cout << "Üzgünüm..." << endl;
    }

    /* Else - If yapısı
     * Bu yapı eğer kendisinden önce bir 'if' ifadesi var ise anlam kazanır.
     * 'if' yapısı içindeki şart doğru değilse bu seferde 'else if' yapısına bakıyor
     * ve şart doğrumu diye kontrol ediliyor.
     */

    // Örnek:
    int sayi;
    cout << "Bir sayı giriniz: ";
    cin >> sayi;

    if(sayi > 0)
    {
        cout << "Sayı sıfırdan büyüktür." << endl;
    }
    else if (sayi < 0) 
    {
        cout << "Sayı sıfırdan küçüktür" << endl;
    }
    else 
    {
        cout << "Sayı sıfırdır" << endl;
    }

    /* Switch - Case yapısı
     * Yapının başlıca amacı bir değişkenin 
     * değerine göre programa yön vermektir. 
     */

    // Kullanım:
    int sayi = 10;
    switch (sayi/*kontrol edilecek ifade*/)
    {
    case 10:
        // Yapılacak işlemler
        break;
    case 11:
        //Yapılcak işlemler
        break;
    default:
        // Üsteki durumların dışındaki bir durumda yapılacak işlemler
        break;
    }

    return 0;
}