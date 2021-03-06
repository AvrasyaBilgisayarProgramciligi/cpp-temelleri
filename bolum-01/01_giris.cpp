#include <iostream>
/* (#) Diyez işareti ile başlayan satırlar başlık dosyalarıdır.
 * Program içinde bazı kodları kullanabilmek
 * için bu başlık dosyalarını programa dahil etmek gerekir.
 */

using namespace std;
/* 'std' alanının kulanımının programa dahil olduğunu söyler.
 * Eğer alanını programa dahil etmezsek 'cout' ifadesini şöyle yazmamız gerekir:
 * std::cout << "Merhaba, Dünya" << std::endl;
 */

int main()
{
    /* Her programlama dilinde başlangıçta
     * yapıldığı gibi 'Merhaba, Dünya' yazıyoruz.
     */
    cout << "Merhaba, Dünya" << endl;

    /* Cpp de bulunan değişken türleri
     * Char
     * Short
     * Int
     * Long
     * Bool
     * Double
     * Float
     */

    /* Değişken tanımlama
     * (değişken tipi) (değişken adı);
     */
    int yas;
    float fiyat;
    char harf;

    /* Sabit değişkenler
     * Programın çalışma süresince değişmeyecek olan değerlerin saklanmasında için kullanılır.
     * 'const' anahtar kelimesi ile ifade edilir ve tanımlanırken mutlaka değer atanması zorunludur.
     */
    int const son_yas = 20;
    float const son_fiyat = 19.99f;
    char const son_harf = 'C';


    return 0; // Şimdilik bilmemize gerek yok.
             // Burdaki tek görevi, fonksiyonu bitirmek.
}
