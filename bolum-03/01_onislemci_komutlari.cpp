/* Bir programda simgesel sabitler, makro fonksiyonlar veya
 * programın koşullu derlenmesi gibi durumlarda ön işlemci komutları
 * devreye girer.
 *
 * ! Kısaca ön işlemci derleme işleminden önce çalışır ve ön işlemden
 * elde edilen dosya daha sonra gerçek derleyiciye aktarılır.
 */

// Kullanım:
// (# (diyez)) (ön işlem komutu) (argumanlar)

/* Komutlar Hakkında Genel Bilgiler;
 * - Koşul olrak kaynak dosyasının belli kısmını dahil etme
 *   - #if
 *   - #ifdef
 *   - #ifndef
 *   - #else
 *   - #elif
 *   - #endif
 *
 * - Değiştirme alıntı veya alıntı veya birleştirme
 *   tanımlayıcıları ile metin maktroları
 *   - #define
 *   - #undef
 *
 * - Dahil etme
 *   - #include
 *
 * - Uyarı verme
 *   - #warning
 *
 * - Hata verme
 *   - #error
 *
 * - Tanımlanan uygulama
 *   - #pragma
 *
 * - Dosya adı ve satır bilgisi
 *   - #line
 */

/* Include komutu
 * 'include' anahtar kelimesi ile o an çalışan programın
 * içindeki (include keslimesinin bulunduğu yere) belirtilen dosyanın kopyası
 * eklenir.
 */

/* Include komutunun iki farklı kullanımı vardır;
 * - #include "başlık dosyası"
 * - #include <başlık dosyası
 *
 * Eğer başlık dosyası ("") ile belirtilmişse dosya
 * o an çalışan alanda aranır (default directory) yok eğer
 * başlık dosyası (<>) ile belirtilmişse
 * ilgili dosya önceden belirtilmiş olan alanda aranır.
 */

#include "stdio.h" // Çalışılan alanda arama
#include <iostream> // Önceden belirtilen alanda arama

/* Define komutu
 * Bu komut yardımıyla bir program parçasına simgesel bir isim
 * verilmesi ve makro fonksiyon tanımlaması yapılabilir.
 */

/* Define komutunun kullanımı;
 * - #define simgeselSabitIsmi sabitDeğer
 */
#define PI 3.14
#define HAFTANIN_GUNLERI 7
#define AYLAR 12

// Örnek:
#define ANA_KISIM int main()
#define BASLANGIC {
#define BITIS }

ANA_KISIM
BASLANGIC
std::cout << "Merhaba, Define" << std::endl;
BITIS

/* Output:
 * Merhaba, Define
 */
