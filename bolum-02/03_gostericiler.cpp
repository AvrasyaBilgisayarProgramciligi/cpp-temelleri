#include <iostream>

using namespace std;

int main()
{
    /* Göstericiler, içerisinde bir hafıza adresi olan değişkenlerdir.
     * Burada adres, bellekteki bir verinin yerini gösterir.
     */

    /* Gösterici tanımlama
     * (tür) *(gösterici ismi)
     */
    int *sayi;
    float *fiyat;
    char *harf;

    /* Gösterici öpretatörler;
     * - '&' ifadesi adres operatörü olarak kullanılır.
     */

    // Kullanım:
    int i = 5;
    int *ptr;
    ptr = &i;

    // Test:
    cout << "i değişkeninin adresi: " << &i << " | " << "ptr değişkeninin değeri: " << ptr << endl;
    cout << "i değişkeninin değeri: " << i << " | " << "*ptr' nin değeri: " << *ptr;

    /* Output:
     * i değişkeninin adresi: 0x7ffd3f1b10dc | ptr değişkeninin değeri: 0x7ffd3f1b10dc
     * i değişkeninin değeri: 5 | *ptr' nin değeri: 5
     */

    return 0;
}