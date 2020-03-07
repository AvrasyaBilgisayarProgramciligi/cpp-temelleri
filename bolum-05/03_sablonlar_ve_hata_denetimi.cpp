#include <iostream>

/* Öncellikle bu iki kısım orjinal C++ tanımlamsında değildir
 * ve bir kaç sene öne bulunmuştur.
 */

/* Sosyal fonksiyonlar
 * Aynı fonksiyonu farklı veri yapıları ile işleyebilecek bir yapı olduğundan,
 * tekrar tekrar kod yazmamızı engelleyip anlaşılır ve okunabilir kod yazmamızı sağlar.
 * 
 * En önemli nokta ise işlenen verinin parametre olarak geri döndürülmesidir.
 * Örnek vermek gerekirse; parametre olarak tamsayı alan bir fonksiyonumuz var.
 * Peki aynı fonksiyona bir ondalıklı sayı göndermek istersek ne yapmalıyız?
 * Bütün fonksiyonu tekrar yazmamak için sosyal fonksiyonlardan yardım alırız.
 */

/* Sosyal fonksiyon tanımlama
 * template <typename veya class type> (donustipi) (fonksiyon adi) (girilen parametreler)
 * {
 *      // Kod bloğu
 * }
 */

template <class type> void ekrana_yaz(type deger) {
    std::cout << "Değer: " << deger << std::endl;
}

template <typename T> void ekrana_bas(T deger) {
    std::cout << "Değer: " << deger << std::endl;
} 

/* Hata denetimi
 * Kısaca bir alt sistemdir. Adından da anlaşılacağı üzere program çalışırken 
 * oluşacak hatalara karşı bizi uyarır. Bu sistem profesyonel programların 
 * çoğunda kullanılır ve programın kullanışlılığını arttırır. Piyasada 
 * kullanacağımız bir program yazacaksak oluşabilecek bütün hataları düşünmeliyiz.
 */

/* Kullanım:
 * try
 * {
 *      // İşlenecek kod bloğu
 * }
 * catch(type1 arg)
 * {
 *      // Hata ile karşılaşıldığında işlenecek kod
 * }
 */

double bol (int a, int b)
{
    try
    {
        if(b <= 0)
        {
            throw b;
        }
        
        return a / b;
    }
    catch(int i)
    {
        std::cout << "Girilen sayı sıfır veya sıfırdan küçük olamaz \n" <<
                     "Girilen sayı: " << i << std::endl;
        exit(1);
    }
}

int main()
{
    int yas = 24;
    float deger = 14.5;
    double pi = 3.14; 
    std::string isim = "Ali veli";
    
    ekrana_yaz(yas);
    ekrana_yaz(deger);
    ekrana_yaz(pi);
    ekrana_yaz(isim);

    ekrana_bas(yas);
    ekrana_bas(deger);
    ekrana_bas(pi);
    ekrana_bas(isim);

    double sonuc = bol(5, 0);
    std::cout << "Bölme sonucu: " << sonuc << std::endl;
    
    return 0;
}
